#include<stdio.h>
/*. In a town, the percentage of men is 52. The percentage of total literacy is 48. 
If total percentage of literate men is 35 of the total population, 
write a program to find the total number of illiterate men and women if the population of the town is 80,000*/
int main()
{
	double man_population,women_population,total_leteracy,man_literacy, women_literacy,women_percantage,
	illeterate_man,illeterate_women;

    double population=8000;



	man_population=0.52*population;
	women_population=population-man_population;
	total_leteracy=0.48*population;
	man_literacy=0.35*population;
    women_literacy=total_leteracy-man_literacy;
	illeterate_man=	man_population-man_literacy;
	illeterate_women=women_population- women_literacy;
	printf("Illeterate Man=%.2lf\nIlleterate Women=%.2lf",illeterate_man,illeterate_women);

	return 0;

}
