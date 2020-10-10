// 2. Sum of divisors
// Calculate the sum of divisors for a number entered by the user. 
// (e.g. for 6: 1+2+3+6 = 12.) Modify your algorithm to exclude the number itself from the summation.
// What should be changed in the program?

// Perfect number is an integer that equals to this sum
// (so the sum of divisors, including 1, excluding the number itself).
// The first perfect number is 6 as 1+2+3=6. The next two are 28 and 496.
// Print out if the number entered by the user is a perfect number or not.

// Hint: Sum of divisors implies applying summation: a loop, and summing in the accumulator.
// In our case not all numbers in the loop qualify for being a divisor.

#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%i", &n);
    for (int i = 1; i < n; i++)
    {
        if (n%i==0)
            sum += i;        
    }
    if(sum == n)
        printf("The number entered is a perfect number.");
        else
            printf("The number entered is not a perfect number.");
        
    return 0;
}