#include<stdio.h>

void updateAverage(int num1, int num2, float *average)
{
	*average = (float)(num1+num2)/2;
}

int main()
{
	float average = 0;
	updateAverage(1034, 513, &average);
	printf("The average is %f\n", average);
	return 0;
}