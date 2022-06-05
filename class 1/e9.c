#include<stdio.h>
/*If a four-digit number is input through the keyboard,
 write a program to obtain the sum of the first and last digit of this number*/
int main () {
     int Number, a, b, c, d, d1, d2, d3, d4,sum;

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
    sum= d1 + d4;
    printf(" the sum of the first and last digit of this number is %d\n",sum);

    return 0;
}