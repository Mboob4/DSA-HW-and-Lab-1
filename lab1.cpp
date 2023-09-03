
#include <iostream>
#include <string>
// what header is needed for square root function ?? 
// #include <???>
#include <cmath>

// TODO: complete prime tester function 
bool isPrime(int number) {
    int j;
    // TODO: complete the condition here 
    // guard negative numbers, 0 and 1, as they are not considered as prime numbers.  
    if ( number < 2 ) {
        return false;
    }

    // TODO: complete the for loop to test all possible factors
    // possible factors starts from 2 (inclusive) and goes all the way to sqrt(n) + 1 (inclusive) 
    for (j = 2; j * j <= number; j++) {
        if (number % j == 0)
            return false;
    }

    // no factor found, return true
    return true;
}

// question 2: to be completed by students. 
// TA may give general guidelines but will not help on code level. 
// develop a function to return the 10001st prime number. 
// correct answer: 104743
int the10001PrimeNumber() {
     int count = 0; // Counter to keep track of prime numbers found
        int number = 1; // The number to be checked; start from 1
        int target = 10001; // The target prime number position
        
        while (count < target) {
            number++; // Increment the number to check for if it is prime
            if (isPrime(number)) {
                count++; // If prime, increment the prime counter
            }
        }
        return number;
}


// TODO: please finish the main function.  
int main() {
    // question 1's main() function requirement: 
    // generate following output by using isPrime() function: 
    // int i;
    
    // for (i = 1; i<=19; i++) {
    //     if (isPrime(i)) {
    //         std::cout << i << " is a prime number." << std::endl;
    //     }
    //     else {
    //         std::cout << i << " is Not a prime number." << std::endl;
    //     }
    // };

    // return 0;


    /*
    1 is NOT a prime number.
    2 is a prime number.
    3 is a prime number.
    4 is NOT a prime number.
    5 is a prime number.
    6 is NOT a prime number.
    7 is a prime number.
    8 is NOT a prime number.
    9 is NOT a prime number.
    10 is NOT a prime number.
    11 is a prime number.
    12 is NOT a prime number.
    13 is a prime number.
    14 is NOT a prime number.
    15 is NOT a prime number.
    16 is NOT a prime number.
    17 is a prime number.
    18 is NOT a prime number.
    19 is a prime number.
    */

    // question 2's code. 
    // Please complete the function the10001PrimeNumber() first, 
    // then uncomment following code to generate desired output
    std::cout << "The 10001st prime number: " << the10001PrimeNumber() << std::endl;


}
