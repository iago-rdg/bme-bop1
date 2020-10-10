// A twin prime is a prime number that is either 2 less or 2 more than another prime number
// for example, either member of the twin prime pair (41, 43). 
// In other words, a twin prime is a prime that has a prime gap of two.

// The first couple of twin primes are (3, 5), (5, 7) and (11, 13). 
// Write a C program to find the 60th twin prime! Extend the program to check whether the number between the twin primes 
// has any digit equal to 5. Avoid code duplication, use functions wherever reasonable! Follow the top-down design methodology.

#include<stdio.h>

int isPrime (int x) {
	for (int i=2; i < x; i++)
        if(x%i == 0)
            return 0;
    return 1;
}

int hasFive (int n) {

    while(n != 0) {
        int curr_digit = n % 10;
        if (curr_digit == 5)
            return 1;
        n/=10;
    }

    return 0;
}

int main() {

    int number, i;
    number = 1;
    i = 0;
    while (i < 60) {
        number += 2;
        while (!(isPrime(number) && isPrime(number + 2)))
            number += 2;
        ++i;
    }
    printf("The 60th twin primes are (%d,%d)\n", number, number+2);
    printf("The number inbetween %s digit 5.\n", hasFive(number + 1) ? "does contain":"does not contain");
    
	return 0;
}
