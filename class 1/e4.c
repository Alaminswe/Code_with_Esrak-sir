#include<stdio.h>
/*Temperature of a city in Fahrenheit degrees is input through the keyboard. 
Write a program to convert this temperature into Centigrade degrees. */
int main () {
    float F, C, Centregates;
    printf("Enter a farhenhigt number : ");
    scanf("%f", &F);

    C = (((F - 32)/9) * 5);

    printf("Converting into Centregates : %.2f", C);

    return 0;
}   