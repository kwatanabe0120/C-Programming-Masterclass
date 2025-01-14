#include<stdio.h>

typedef struct employee
{
	char name[10];
	int age;
	int id;
} Emp;

void printEmp(Emp employee1)
{
	printf("Name: %s\n", employee1.name);
	printf("Age: %d\n", employee1.age);
	printf("ID: %d\n", employee1.id);
}

void add1toAge(Emp *employee)
{
	(*employee).age +=1;
}

int main()
{
	Emp test = {"Test user", 33, 123};
	printEmp(test);
	add1toAge(&test);
	printf("---------\n");
	printEmp(test);


	return 0;

}