// Write functions that receive a real number parameter, and return:

// cube() – its third power,
// absolute() – its absolute value (there is a fabs() library function but do not use it this time)!
// Write a program that tabulates the values of a, a3, |a| and sin(a) using 4 decimal digits after the decimal point
// from a = −1 to +1, stepping by 0.1! Include math.h to use sin.

#include<stdio.h>
#include<math.h>

float cube (float n) {
	return n*n*n;
}

float absolute (float n) {
	if (n < 0)
	    n = -n;
	return n;
}

int main () {
	float a;
	for (a = -1; a <= +1; a += 0.1)
	    printf("%.4f  %.4f  %.4f  %.4f\n", a, cube(a) , absolute(a) , sin(a));
	return 0;
}