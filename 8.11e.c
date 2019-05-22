#include <stdio.h>
int leap_year(int year);
int main(void)
{
	int year;
	while (scanf("%d", &year) != EOF){
		printf("%d\n", leap_year(year));
	}
	return 0;
}
int leap_year(int year)
{
	int is_leap;
	is_leap = (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
	
	return is_leap;
}

 
