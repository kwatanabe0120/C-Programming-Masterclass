#include<stdio.h>

void print_age(int age)
{
	printf("You are %d years old.\n", age);
}

int main()
{
	int age;
	void (*funcPt) (int) = NULL;

	printf("Enter your age: ");
	scanf("%d", &age);

	funcPt = print_age;
	(funcPt)(age);
	return 0;
}