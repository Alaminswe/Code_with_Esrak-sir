#include<stdio.h>
/*Any integer is input through the keyboard. Write a program to find out whether itis an odd
number or even number.*/
#include<stdio.h>
int main()
{
	int number;
	
	printf("Enter the number :");
	scanf("%d",&number);
	
	
	if(number%2==0){
		
		printf("Even Number");
		
	}
	else
	{
			printf("Odd Number");
	}
	
	return 0;
	
}