#include <stdio.h>
#include <math.h>

typedef struct Point
{
    float x, y;
} Point;

float dist (Point p1, Point p2);

int equal (Point p1, Point p2);

Point read();

int main()
{
    float distance = 0.0;
    int exit = 0;
    printf("Enter the coordinates of Points.\n");
    Point starter = read();
    Point current = starter;
    while(exit!=1) {
        Point new = read();
        if (!equal(starter, new)){
            distance += dist(current, new);
            current = new;
        }
        else
            exit = 1;
    }

    printf("\nThe total distance is: %.4f", distance);
    
    return 0;
}

float dist(Point p1, Point p2)
{
    float d = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
    return d;
}

int equal(Point p1, Point p2)
{
    if (p1.x == p2.x)
    {
        if (p1.y == p2.y)
            return 1;
        else
            return 0;
    }
    else
        return 0;
}

Point read()
{
    Point p;
    printf("X: ");
    scanf("%f", &p.x);
    printf("Y: ");
    scanf("%f", &p.y);
    return p;
}