#include<stdio.h>

int main()
{
	int pos;
	FILE *fp;
	fp = fopen("didwork.txt", "r");

	pos = ftell(fp);
	printf("Current position: %d\n", pos);

	fgetc(fp);
	pos = ftell(fp);
	printf("Current position: %d\n", pos);

	fgetc(fp);
	pos = ftell(fp);
	printf("Current position: %d\n", pos);

	fgetc(fp);
	pos = ftell(fp);
	printf("Current position: %d\n", pos);

	char buffer[20];
	fgets(buffer, 20, fp);
	// printf("Read string: %s\n", buffer);
	pos = ftell(fp);
	printf("Current position: %d\n", pos);

	fseek(fp,-5,SEEK_CUR);
	pos = ftell(fp);
	printf("Current position: %d\n", pos);

	rewind(fp);
	pos = ftell(fp);
	printf("Current position: %d\n", pos);


	fclose(fp);

	return 0;
}