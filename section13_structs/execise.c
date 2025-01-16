#include<stdio.h>
#include<stdlib.h>

typedef struct employee
{
	char name[10];
	float age;
	int id;
} Employee;

Employee *CreateEmployeeArr(int totalElements)
{
	Employee *arr = (Employee *)malloc(totalElements*sizeof(Employee));
	if (!arr) 
		return NULL;
	else
	{
		for (int i =0; i < totalElements; i++)
		{
			printf("Please enter the name for #%d ",i+1);
			scanf("%s", arr[i].name);
			printf("Please enter the age: ");
			scanf("%f", &arr[i].age);
			printf("Please enter the id: ");
			scanf("%d", &arr[i].id);
		}
		return arr;
	}
}

void CreateEmployeeArr2(int totalElements, Employee **ptr)
{
	Employee *arr = (Employee *)malloc(totalElements*sizeof(Employee));
	if (!arr) 
		exit(1);
	else
	{
		for (int i =0; i < totalElements; i++)
		{
			printf("Please enter the name for #%d ",i+1);
			scanf("%s", arr[i].name);
			printf("Please enter the age: ");
			scanf("%f", &arr[i].age);
			printf("Please enter the id: ");
			scanf("%d", &arr[i].id);
		}
		*ptr = arr;
	}
}




int main()
{
	int elementsCount;
	Employee *arr = NULL;
	printf("Please enter the number of employee you have: ");
	scanf("%d", &elementsCount);
	// arr = CreateEmployeeArr(elementsCount);
	CreateEmployeeArr2(elementsCount,&arr);
	printf("The memory location: %p\n", arr);
	free(arr);
	return 0;

}