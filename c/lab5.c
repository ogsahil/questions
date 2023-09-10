#include <stdio.h>

int main()
{

    float pie = 3.14;
    int r = 3;
    float circle = pie * r * r;
    int tri, a, b;
    a = 5;
    b = 6;
    tri = a * b / 2;
    int l, w;
    l = 4;
    w = 3;
    int rec = l * b;

    printf("here is the area of circle: %f\n", circle);
    printf("here is the area of triangle: %d\n", tri);
    printf("here is the area of rectangle: %d\n", rec);

    return 0;
}