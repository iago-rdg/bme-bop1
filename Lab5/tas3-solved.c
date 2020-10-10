#include <stdio.h>
#include <stdbool.h>
 
/* decides whether the number is a prime or not */
int prime(int number) {
    for (int divisor = 2; divisor < number; divisor++)
        if (number % divisor == 0)
            return 0;
    return 1;
}
 
/* decides whether the number has a specific digit included or not */
int contains(int number, int digit) {
    while (number > 0) {
        if (number % 10 == digit)
            return 1;
        number /= 10;
    }
    return 0;
}
 
int main(void) {
    int number, i;
 
    /* initialization */
    number = 1;
    i = 0;
    while (i < 60) {
        /* find next twin primes */
        number += 2;
        while (!(prime(number) && prime(number + 2)))
            number += 2;
        ++i;
    }
    printf("%dth twin prime: %d %d\n", 60, number, number+2);
 
    /* second part: check if the number inbetween contains digit 5 */
    printf("The number inbetween %s digit 5.\n", contains(number + 1, 5) ? "does contain":"does not contain");
 
    return 0;
}