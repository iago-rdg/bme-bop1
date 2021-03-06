// 3. Approximating Euler's number "e" (the base of the natural logarithm)
// The natural number can e=2.7182818… can be obtained by the following infinite sum:

//     1    1    1    1    1
// e = ── + ── + ── + ── + ── + …
//     0!   1!   2!   3!   4!

// Write a program to compute it with the first 20 terms! Note that the factorial can be a high number, use a double data type to store it!

// Hint: if you have used nested loops, try to simplify your solution! A single loop is enough to solve the problem.

#include <stdio.h>

int main()
{
    double e = 0.0;
    double factorial = 0.0;

    for(int i=0; i<=20; i++){
        if(factorial==0.0)
            factorial = 1;
            else {
                factorial = factorial * i;
            }
        e+=(1/factorial);
        printf("%.15f\n", e);
    }
}