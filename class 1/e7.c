#include<stdio.h>
/*If a five-digit number is input through the keyboard, 
write a program to calculate the sum of its digits.*/
int main () {
     int Number, sum, a, b, c, d, e, d1, d2, d3, d4, d5;

     printf("Enter the Number = ");
     scanf("%d", &Number);

     a = Number / 10;
     d5 = Number % 10;
     b = a / 10;
     d4 = a % 10;
     c = b / 10;
     d3 = b % 10;
     d = c / 10;
     d2 = c % 10;
     e = d / 10;
     d1 = d % 10;
    sum = d1 + d2 + d3 + d4 + d5;
    printf("sum is %d", sum);

    return 0;
}
/*#include<stdio.h>
int main()
{
    int number,sum=0,i;
    printf("Enter five digit: ");
    scanf("%d",&number);
    for(i=number;i!=0;i=i/10){
        sum=sum+(i%10);
    }
    printf("Sum is= %d",sum);
    return 0;
}
*/