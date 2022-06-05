#include<stdio.h>
/*Two numbers are input through the keyboard into two locations C and D.
 Write a program to interchange the contents of C and D.*/
int main () {
    int C, D;
    
    printf("Enter a number C = ");
    scanf("%d", &C);
    printf("Enter a number D = ");
    scanf("%d", &D);

    printf("C = %d\nD = %d", D, C);


    return 0;
}