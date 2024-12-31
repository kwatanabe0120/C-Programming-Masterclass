#include<stdio.h>


int main()
{
	int grade = 80;
	printf("Size of variable: %ld bytes\n", sizeof(grade));

	double gpa = 3.4;
	printf("Size of variable: %ld bytes\n", sizeof(gpa));

	int grade1 = 80, grade2 = 90;
	printf("Size of variable: %ld bytes\n", sizeof(grade1 + grade2));

	int grade3 = 80, grade4 = 90;
	printf("Size of variable: %ld bytes\n\n", sizeof(grade3) + sizeof(grade4));

	printf("Size of double: %ld bytes\n", sizeof(double));
	printf("Size of char: %ld bytes\n", sizeof(char));
	printf("Size of int : %ld bytes\n", sizeof(int));
	printf("Size of float: %ld bytes\n", sizeof(float));
	printf("Size of 'a': %ld bytes\n", sizeof('a'));
	printf("Size of \"a\": %ld bytes\n", sizeof("a"));

	int *ptr;
	double *ptr2;
	printf("Size of pointer: %ld bytes\n", sizeof(ptr));
	printf("Size of pointer2: %ld bytes\n", sizeof(ptr2));

	return 0;
}

