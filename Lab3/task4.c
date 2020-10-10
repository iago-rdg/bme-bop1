// 4. Approximating π, method I.
// John Wallis, British mathematician developed the following expression to compute the constant π:

// π   2·2   4·4   6·6   8·8
// ─ = ─── · ─── · ─── · ─── · …
// 2   1·3   3·5   5·7   7·9

// Identify the repeating pattern in the formula, and write a program to evaluate it up to the first n factors (n is obtained from the user).
// Test the program with n=10, n=100 and n=1000 settings!

#include <stdio.h>

int main() {
    double n, i;
    double pi = 4;

    printf("Enter the number of iterations: ");    
    scanf("%lf",&n);     

    for(i = 3; i <= (n + 2); i+=2)    
        pi = pi * ((i - 1) / i) * (( i + 1) / i);

    printf("Aproximated value of PI = %1.16lf\n", pi);  

    return 0;
}