#include<stdio.h>

// dough, sauce, cheese * 2 options
void dough1()
{
	printf("Soft dough\n");
}

void dough2()
{
	printf("Hard dough\n");
}

void sauce1()
{
	printf("Sweet sauce\n");
}

void sauce2()
{
	printf("Spicy sauce\n");
}

void cheese1()
{
	printf("Blue cheese\n");
}

void cheese2()
{
	printf("Red cheese\n");
}

void createPizza (void (*dough)(),void (*sauce)(),void (*cheese)())
{
	(dough)();
	(sauce)();
	(cheese)();
}
int main()
{
	int dNum, sNum, cNum;
	void (*dough[2])() = {dough1, dough2};
	void (*sauce[2])() = {sauce1, sauce2};
	void (*cheese[2])() = {cheese1, cheese2};
	printf("Select dough(0 or 1): ");
	scanf("%d", &dNum);
	printf("Select sauce(0 or 1): ");
	scanf("%d", &sNum);
	printf("Select cheese(0 or 1): ");
	scanf("%d", &cNum);
	createPizza(dough[dNum], sauce[sNum], cheese[cNum]);
	return 0;
}