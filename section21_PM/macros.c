#define MAX(a,b) ((a)>(b)? (a):(b))
#define PI 3.1415
#define AREA(a) ((a)*(a)*(PI))
#define TO_STRING(x)#x
#define DISPLAY_INT(x) printf(#x " = %d\n", x);
#define DISPLAY_FLOAT(x) printf(#x " = %f\n", x);
#define DISPLAY_VALUE(x, placeholder) printf(#x " = %" #placeholder "\n", x);
#define PRINT_LOCATION printf("AT %s, line %d\n", __FILE__, __LINE__);
#include<stdio.h>

int main()
{
	int num1 = 10, num2= 30;
	printf("The max num is %d\n", MAX(num1, num2)); 

	int radius = 5;
	printf("The are of circle is %f\n", AREA(radius));

	printf("%s\n", TO_STRING(hello world));

	// DISPLAY_INT(num1);
	// DISPLAY_FLOAT(PI);
	DISPLAY_VALUE(3.14, f);

	printf("This program was compiled on %s at %s\n", __DATE__, __TIME__);
	PRINT_LOCATION;


	return 0;
}