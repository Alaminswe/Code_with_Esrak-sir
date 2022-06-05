#include<stdio.h>
/*Write a program to find out your grade in final exam. Taking the marks input from user.
Follow DIU grading method.*/
int main()
{
	double marks;
	
	printf("Enter a marks:");
    scanf("%lf",&marks);	
	
	if(marks>79 && marks<=100)
	{
		printf("A+");	
	}
	else if(marks>74 && marks<80)
    {
		printf("A");	
	}
	else if(marks>69 && marks<75)
    {
		printf("A-");
	}
	else if(marks>64 && marks<70)
    {
		printf("B+");
	}
	else if(marks>59 && marks<65)
    {
		printf("B");
	}
	else if(marks>54 && marks<60)
    {
		printf("B-");
	}
	else if(marks>49 && marks<55)
    {
		printf("C+");
	}
	else if(marks>44 && marks<50)
    {	
		printf("C");	
	}
	else if(marks>39 && marks<45)
    {
		printf("C-");	
	}
	else{
		printf("Fail");
	}
	return 0;
}