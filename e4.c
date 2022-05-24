#include<stdio.h>
int main () {
    float F, C, Centregates;
    printf("Enter a farhenhigt number : ");
    scanf("%f", &F);

    C = (((F - 32)/9) * 5);

    printf("Converting into Centregates : %.2f", C);

    return 0;
}   