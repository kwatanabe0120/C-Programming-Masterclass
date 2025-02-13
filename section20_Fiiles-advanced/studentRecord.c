#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student
{
	char *name;
	int totalGrades;
	int *grade;
} Student;

void printStudent(Student s)
{
	printf("\n-----Printing Student Info-----\n");
	printf("Name:%s\n", s.name);
	printf("Total Grade:%d\n", s.totalGrades);
	for (int i =0; i < s.totalGrades; i++)
	{
		printf("#%d grade:%d\n", i+1, s.grade[i]);
	}
	printf("-----\n");

}

Student createStudent() {
    Student s;
    char buffer[100];

    printf("Enter student name: ");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0';  // ✅ 改行を削除

    s.name = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
    if (s.name == NULL) {
        perror("Memory allocation failed");
        exit(1);
    }
    strcpy(s.name, buffer);

    printf("Enter total number of grades: ");
    scanf("%d", &(s.totalGrades));  

    s.grade = (int *)malloc(s.totalGrades * sizeof(int));
    if (s.grade == NULL) {
        perror("Memory allocation failed");
        free(s.name);
        exit(1);
    }

    for (int i = 0; i < s.totalGrades; i++) {
        printf("Enter grade #%d: ", i + 1);
        scanf("%d", &(s.grade[i]));  
    }

    return s;
}

void saveStudentInFile(char *filename, Student *s)
{
	FILE *fp = fopen(filename, "ab");
	if (fp == NULL) return;

	fwrite(s->name, sizeof(char), strlen(s->name)+1,fp);
	fwrite(&s->totalGrades, sizeof(int), 1,fp);
	fwrite(s->grade, sizeof(int), s->totalGrades, fp);
	fclose(fp);
}

int main()
{
	char filename[] = "studentRecord.bin";
	Student s = createStudent();
	printStudent(s);
	saveStudentInFile(filename,&s);

	free(s.name);
	free(s.grade);
	return 0;
}