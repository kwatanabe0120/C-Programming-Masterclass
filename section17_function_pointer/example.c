#include<stdio.h>

void hello(){
	printf("Hello, World!\n");
}

int main(){
	hello();
	printf("The address of the hello function is: %p\n", hello);
	printf("The address of the main function is: %p\n", main);

	
	return 0;
}