#include<stdio.h>
int main () {
    float a, b, r, pi = 3.1416, Area_rectangle, peramiter_rectangle, Area_circle,circumference_circle; // length = a, breadth = b, redius = r
    printf("Enter a number of length : ");
    scanf("%f", &a);
    printf("Enter a number of breadth : ");
    scanf("%f", &b);
    printf("Enter a number of redius : ");
    scanf("%f", &r);

    Area_rectangle = (a * b);
    peramiter_rectangle = 2 * (a + b);
    Area_circle = pi * (r * r);
    circumference_circle = 2 * pi * r;

    printf("Area of rectangle = %.3f\n",Area_rectangle);
    printf("peramiter of rectangle = %.3f\n",peramiter_rectangle);
    printf("Area of circle = %.3f\n",Area_circle);
    printf("circumference of circle = %.3f\n",circumference_circle);




    return 0;
}