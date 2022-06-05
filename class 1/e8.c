#include<stdio.h>
//If a five-digit number is input through the keyboard, write a program to reverse the number.
int main () {
     int Number, a, b, c, d, e, d1, d2, d3, d4, d5;

     printf("Enter the Number = ");
     scanf("%d", &Number);

     a = Number / 10;
     d1 = Number % 10;
     b = a / 10;
     d2 = a % 10;
     c = b / 10;
     d3 = b % 10;
     d = c / 10;
     d4 = c % 10;
     e = d / 10;
     d5 = d % 10;
    printf(" the  reverse is %d %d %d %d %d\n", d1, d2, d3, d4, d5 );

    return 0;
}