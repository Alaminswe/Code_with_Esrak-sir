#include<stdio.h>
/*. If the ages of Arif, Fahmid and Joy are input through the keyboard, write a program to
determine the youngest of the three.
*/
int main()
{
	int arif,joy,fahmid;
	
	printf("Enter the age of Arif:");
	scanf("%d",&arif);
	
	printf("Enter the age of Joy:");
	scanf("%d",&joy);

    printf("Enter the age of Fahmid:");
	scanf("%d",&fahmid);
	
	
	if(arif<fahmid && arif<joy)
	{
		printf("Arif is younger");
	}
	else if(joy<fahmid && joy<arif)
	{
		printf("Joy is younger");
	}
	
	else{
		
		printf("Fahmid is younger");
	}
	
	
	
	return 0;
	
	
}