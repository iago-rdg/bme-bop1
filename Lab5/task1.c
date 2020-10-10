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

int main ()
{
	float a;
	
	for (a = -1; a <= 1.1; a += 0.1)
	    printf("%.4f  %.4f  %.4f  %.4f\n", a, cube(a) , absolute(a) , sin(a));
	
	return 0;
}