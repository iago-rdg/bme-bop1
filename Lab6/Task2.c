#include <stdio.h>
#include <math.h>

typedef struct Circle {
    float x, y, r;
} Circle;

int Overlap(Circle c1, Circle c2);

Circle createCircle();

int main () {
    Circle c1 = createCircle();
    Circle c2 = createCircle();
    printf("The two circles %s each other.", Overlap(c1, c2) ? "overlaps" : "does not overlaps");
    return 0;
}

int Overlap (Circle c1, Circle c2) {
    float d = sqrt(pow((c2.x-c1.x),2)+pow((c2.y-c1.y),2));
    if (d < (c1.r+c2.r))
        return 1;
    else
        return 0;
}

Circle createCircle() {
    Circle c;
    printf ("Please, enter the data of the Circle.\n");
    printf("X: ");
    scanf("%f",&c.x);
    printf("Y: ");
    scanf("%f",&c.y);
    printf("R: ");
    scanf("%f",&c.r);
    return c;
}

