#include <stdio.h>
int month_to_days (int year, int month);
int year_leap(int year);
int main(void)
{
	int year, month;
	while (scanf("%d%d", &year, &month) != EOF){
		printf("%d\n", month_to_days(year, month));
	}
	
	return 0;
}

int month_to_days (int year, int month)
{
	int days;
	switch (month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			days = 31;
			break;
		case 4: case 6: case 9: case 11:
			days = 30;
			break;
		case 2:
			if (year_leap(year)){
				days = 29;
			}else days = 28;
	}
	return days;
}

int year_leap(int year)
{
	int is_leap;
	is_leap = ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0));
	
	return is_leap;
} 
