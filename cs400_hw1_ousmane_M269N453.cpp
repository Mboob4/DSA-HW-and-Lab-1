#include<iostream>   
#include<cmath>     // for functions like sqrt()

// function to calculate n*n + n + 41
int function(int n) { return n*n + n + 41; } 

// function to calculate n*n - 79*n + 1601
int function2(int n) { return n*n - 79*n + 1601; }

// function to calculate n*n + a*n + b
int function3(int n, int a, int b) { return n*n + a*n + b; }

// Function to check if a number is prime
bool isPrime(int number)
{
   if(number < 2) return false; // Negative numbers are not prime
   // Loop to check divisibility up to square root of number
   for(int i = 2; i * i <= number; i++)  
   {
       if(number % i == 0) return false; // If number is divisible, then it's not prime
   }
   return true; 
}

// Function to print first 40 primes using the function formula
void print40Primes()
{
   for(int i=0; i < 40; i++)
   {
       int j = function(i);  // Calculate the value using function()
       if(isPrime(j)) std::cout << j <<" ";  // Print if it's a prime number
   }
}

// Function to print first 80 primes using the function2 formula
void print80Primes()
{
   for(int i = 0; i < 80; i++)
   {
       int j = function2(i);  // Calculate the value using function2()
       if(isPrime(j)) std::cout << j <<" ";  // Print if it's a prime number
   }
}

// Function to find values of a and b that generate maximum consecutive primes
void findab()
{
   int a, b, c, j, n, maxa=0, maxb=0, maxn=0;  
   for(a = -999; a < 1000; a++)  // Looping through possible values of 'a'
   {
       for(b = -1000; b <= 1000; b++)  // Looping through possible values of 'b'
       {
           n = 0, c = 0;
           // Generate primes using function3 and check their primality
           do{
               j = function3(n, a, b);
               c++;
               n++;
           }while(isPrime(j));
           // Store the maximum consecutive prime values
           if(n > maxn)
           {
               maxa = a;
               maxb = b;
               maxn = n;
           }
       }
   }
   std::cout <<"a = "<< maxa <<" b = "<< maxb <<" Max prime= "<< maxn-1 << std::endl; 
}


int main()
{
   std::cout<<"40 prime numbers: "<<std::endl;   // for 40 prime numbers
   print40Primes();  
   std::cout<<"\n80 prime numbers: "<<std::endl; // for 80 prime numbers
   print80Primes();  
   std::cout<<std::endl;
   findab();  // function to find best a and b values for consecutive primes
   return 0;  
}