#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

typedef struct student
{
	char name[20];
	unsigned int id;
	unsigned int grade;
} Student;

typedef struct course
{
	char name[20];
	double averageGrade;
	unsigned int totalStudents;
	Student *studentArray;
}Course;

typedef struct school
{
	char name[20];
	unsigned int totalCourses;
	Course *courseArray;
} School;

Student *createStudent()
{
	Student *newStudent = NULL;
	newStudent = (Student *)malloc(sizeof(Student));
	if (!newStudent) return NULL;
	printf("Enter student name: ");
	scanf("%s", newStudent->name);
	printf("Enter student ID: ");
	scanf("%u", &(newStudent->id));
	printf("Enter student grade: ");
	scanf("%u", &(newStudent->grade));
	return newStudent;
}

void updateAverageGrade(Course *course)
{
	double totalGrades = 0;
	for (int i =0; i < course->totalStudents; i++)
		totalGrades += (course->studentArray[i].grade);
	course->averageGrade = totalGrades/ course->totalStudents;
}

Course *createCourse()
{
	Course *course = NULL;
	course = (Course *)malloc(sizeof(Course));
	if (!course) return NULL;
	printf("Enter course name: ");
	scanf("%s", course->name);
	// printf("Enter average grade: ");
	// scanf("%lf", &(course->averageGrade));
	printf("Enter total student number: ");
	scanf("%u", &(course->totalStudents));

    course->studentArray = (Student *)malloc(course->totalStudents * sizeof(Student));
    if (!course->studentArray) {
        free(course);
        return NULL;
    }
	for (int i =0; i < course->totalStudents; i++)
	{
		printf("\nEnter details for students #%d\n", i+1);
		Student* newStudent = createStudent();
		if (!newStudent) return NULL;
		course->studentArray[i] = *newStudent;
		free(newStudent);
	}
	updateAverageGrade(course);
	return course;
}



School *createSchool()
{
	School *newSchool = (School *)malloc(sizeof(School));
	if (!newSchool) return NULL;
	printf("Enter school name: ");
	scanf("%s", newSchool->name);
	printf("Enter total number of courses: ");
	scanf("%u", &(newSchool->totalCourses));

	newSchool->courseArray = (Course *)malloc(sizeof(Course)*newSchool->totalCourses);

	for (int i =0; i<newSchool->totalCourses; i++)
	{
		printf("\nEnter details for course #%d\n", i+1);
		Course *newCourse = createCourse();
		newSchool->courseArray[i] = *newCourse;
		free(newCourse);
	}
	return newSchool;
}

void printStudentDetails(Student *student)
{
	printf("\nStudent name: %s", student->name);
	printf("\nStudent ID: %u", student->id);
	printf("\nStudent grade: %u", student->grade);


}

void printCourseDetails(Course *course)
{
	printf("\nCourse name: %s", course->name);
	printf("\nCourse Average Grade: %lf", course->averageGrade);
	printf("\nCourse total student: %u", course->totalStudents);
	for (int i = 0; i < course->totalStudents; i++)
	{
		printf("\nDetails for student #%d:\n", i+1);
		printStudentDetails(&(course->studentArray[i]));
	}
}

void printStudentCourses(School *school, int studentID)
{
	printf("\nCourses for student with ID %d\n",studentID);

	for (int i = 0; i < school->totalCourses;i++)
	{
		for (int j =0; j < school->courseArray[i].totalStudents; j++)
		{
			if (school->courseArray[i].studentArray[j].id == studentID)
			{
				printf("- %s\n", school->courseArray[i].name);
				break;
			}
		}
	}
}

void printStudentWhoFailed(Course *course, double cutOffGrade)
{
	printf("\nStudent who failed in %s", course->name);
	for (int i =0; i < course->totalStudents; i++)
	{
		if (course->studentArray[i].grade < cutOffGrade)
			printStudentDetails(&(course->studentArray[i]));
	}
}

void printStudentWhoPassed(Course *course, double cutOffGrade)
{
	printf("\nStudent who passed in %s\n", course->name);
	for (int i =0; i < course->totalStudents; i++)
	{
		if (course->studentArray[i].grade >= cutOffGrade)
			printStudentDetails(&(course->studentArray[i]));
	}
}

void printCoursesWithPassAvgGrade(School *school, double cutOffGrade)
{
	printf("Courses with passed average grade:\n");
	for (int i =0; i < school->totalCourses; i++)
	{
		if (school->courseArray[i].averageGrade >= cutOffGrade)
			printCourseDetails(&(school->courseArray[i]));
	}
}


void printCoursesWithFailedAvgGrade(School *school, double cutOffGrade)
{
	printf("Courses with failed average grade:\n");
	for (int i =0; i < school->totalCourses; i++)
	{
		if (school->courseArray[i].averageGrade < cutOffGrade)
			printCourseDetails(&(school->courseArray[i]));
	}
}

void printAverageGradeAllCourses(School *school)
{
	double totalGrade = 0;
	double average;

	for (int i =0; i < school->totalCourses; i++)
	{
		totalGrade +=school->courseArray[i].averageGrade;
	}
	average = totalGrade/ school->totalCourses;
	printf("Average grade betwenn all courses in school %s is %.2f\n", school->name,average);
}

void printCourseWithHighestAverage(School *school)
{
	double highestAvg = 0;
	Course *highestAvgCourse = NULL;

	for (int i =0; i < school->totalCourses; i++)
	{
		if(school->courseArray[i].averageGrade > highestAvg)
		{
			highestAvg = school->courseArray[i].averageGrade;
			highestAvgCourse = &(school->courseArray[i]);
		}
	}
	printf("Course with the hightest average grade:\n");
	printCourseDetails(highestAvgCourse);
}

void printSchool(School *school)
{
	for (int i =0; i< school->totalCourses; i++)
	{
		printCourseDetails(&(school->courseArray[i]));
	}
}

void updateStudentGrade(Course *course, unsigned int studentID, unsigned int newGrade)
{
	for (unsigned int i =0; i < course->totalStudents; i++)
	{
		if(course->studentArray[i].id == studentID)
		{
			course->studentArray[i].grade = newGrade;
			updateAverageGrade(course);
			return;
		}
	}
	printf("\nStudent not found!\n");
}

void updateStudentName(Course *course, unsigned int studentID, char *newName)
{
	for (unsigned int i =0; i < course->totalStudents; i++)
	{
		if(course->studentArray[i].id == studentID)
		{
			strcpy(course->studentArray[i].name, newName);
			return;
		}
	}
	printf("\nStudent not found!\n");
}

bool isCourseInSchool(School *school, char *courseName)
{
	Course *courseArray = school->courseArray;
	unsigned int numCourses = school->totalCourses;

	for (unsigned int i = 0 ; i < numCourses; i++)
	{
		if (strcmp(courseArray[i].name,courseName) == 0)
			return true;
	}
	return false;
}

void updateCourseName(Course *course, char *newName)
{
	strcpy(course->name, newName);
}

void printCommonCoursesBetweenSchool(School *school1, School *school2)
{
	printf("Common courses between %s and %s:\n", school1->name,school2->name);
	for (unsigned int i =0; i < school1->totalCourses; i++)
	{
		if(isCourseInSchool(school2,school1->courseArray[i].name))
			printf("%s\n", school1->courseArray[i].name);
	}
}
void printUniqueCoursesBetweenSchool(School *school1, School *school2)
{
	printf("Courses in %s but not in %s:\n", school1->name,school2->name);
	for (unsigned int i =0; i < school1->totalCourses; i++)
	{
		if(!isCourseInSchool(school2,school1->courseArray[i].name))
			printf("%s\n", school1->courseArray[i].name);
	}
}


void freeStudent(Student *student)
{
	free(student);
}

void freeCourse(Course *course, unsigned int totalCourses)
{
	for (unsigned int i = 0; i < totalCourses; i++)
	{
		freeStudent(course[i].studentArray);
		course[i].studentArray = NULL;
	}
}


void freeSchool(School *school)
{
	freeCourse(school->courseArray,school->totalCourses);
	free(school->courseArray);
	school->courseArray =NULL;
	free(school);
}


int main()
{
	School *mySchool = createSchool(); 
	printSchool(mySchool);

	printStudentCourses(mySchool, 123);
	printStudentWhoFailed(&(mySchool->courseArray[0]),60.0);
	printStudentWhoPassed(&(mySchool->courseArray[0]),60.0);
	freeSchool(mySchool);
	return 0;
}
