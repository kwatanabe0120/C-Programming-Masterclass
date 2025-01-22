#include<stdio.h>

void addition(int a, int b)
{
	printf("%d + %d = %d\n", a,b,a+b);
}
void subtraction(int a, int b)
{
	printf("%d - %d = %d\n", a, b, a - b);
}

void multiplication(int a, int b)
{
	printf("%d * %d = %d\n", a, b, a * b);
}

void division(int a, int b)
{
	if (b != 0)
		printf("%d / %d = %d\n", a, b, a / b);
	else
		printf("Division by zero is not allowed.\n");
}

int main()
{
	int a, b;
	int choise;
	void (*ptrF[])(int, int) = {addition,subtraction,multiplication,division};

	printf("Select an option:\n");
	printf("0: Addition\n");
	printf("1: Subtraction\n");
	printf("2: Multiplication\n");
	printf("3: Division\n");
	scanf("%d", &choise);

	printf("Enter num1: ");
	scanf("%d", &a);
	printf("Enter num2: ");
	scanf("%d", &b);

	(ptrF[choise])(a,b);
	return 0;

}