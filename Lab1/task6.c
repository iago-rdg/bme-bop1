#include <stdio.h>
#include <math.h>

int main(void) {

    float pi = 3.14159265;
    float result, A, d, h = 0.0;

    printf("Paint the container\n\n");

    printf("Height? ");
    scanf("%f",&h);
    printf("Diameter? ");
    scanf("%f", &d);
    A = 2*pi*(d/2)*((d/2)+h);
    result = A/2;

    printf("\n\n%.1f can(s) of paint needed.", result);
}