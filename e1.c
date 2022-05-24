#include<stdio.h>
int main () {
    int basic_salary, dearness_alloeance, house_rent, gross_salary;
    printf("Enter Basic Salary : ");
    scanf("%d", &basic_salary);

    dearness_alloeance = (basic_salary * 0.4);
    house_rent = ( basic_salary * 0.2);
    
    gross_salary = ( basic_salary - dearness_alloeance - house_rent);

   // printf("%d\n%d\n%d\n", dearness_alloeance, house_rent, gross_salary);
    printf("gross salary is : %d\n", gross_salary);


    return 0;
}