#include<stdio.h>
int main () {
    float sub1, sub2, sub3, sub4, sub5, Aggeregate, percentages;
    printf("Enter the sub number :");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    Aggeregate = (sub1 + sub2 + sub3 + sub4 + sub5);
    
    percentages = (sub1 + sub2 + sub3 + sub4 + sub5)/5;

    printf("Aggeregate of marks = %.2f\n", Aggeregate);
    printf("percentages of marsks = %.2f", percentages);

    return 0;
}