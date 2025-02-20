#include<stdio.h>

enum months
{
	JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main()
{
	enum months m;
	int salaries[13] = {0,10,20,30,40,10,20,30,40,10,20,30,40};
	char *monthNames[] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

	for (m = JAN; m <= DEC; m++)
	{
		printf("%s%10d\n", monthNames[m], salaries[m]);
	}

	return 0;
}


/*
enum workingDays
{
	MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY
};


int main()
{
	enum workingDays userday;
	printf("Please enter the day you works: ");
	scanf("%d", &userday);

	if (userday == MONDAY)
		printf("MONDAY !!!!\n");
	else if (userday == TUESDAY)
		printf("Tuesday !!!!\n");

	return 0;
}
*/