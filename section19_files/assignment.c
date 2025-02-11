#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void createAndWriteFile(char *filename, char *string)
{
	FILE *fp = fopen(filename, "w");
	if (fp == NULL)
	{
		printf("Error when opening file\n");
		exit(1);
	}
	else
	{
		fputs(string,fp);
	}
	fclose(fp);
}

void readFile(char *fileName)
{
	FILE *fp = fopen(fileName, "r");
	char sentense[100];
	if (fp == NULL)
	{
		printf("Error when opening file\n");
		exit(1);
	}
	else
	{
		do 
		{
			fscanf(fp,"%s",sentense);
			printf("%s\n", sentense);
		} while (fgetc(fp) != EOF);
	}
	fclose(fp);
}


void appendToFile(char *filename, char *string)
{
	FILE *fp = fopen(filename, "a");
	if (fp == NULL)
	{
		printf("Error when opening file\n");
		exit(1);
	}
	else
	{
		fputs("\n", fp); // Add a newline before appending the new string
		fputs(string, fp);
	}
	fclose(fp);

}
void modifyLineInFile(char* filename, int lineNumber, char* newContent) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Failed to open the file\n");
        return;
    }
    
    FILE* tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Failed to open the temp file\n");
        fclose(file);
        return;
    }
    
    int lineCount = 0;
    char buffer[1024]; // 一行の最大文字数
    int replaced = 0; // 置き換えたかどうかのフラグ

    while (fgets(buffer, sizeof(buffer), file))
	{
        lineCount++;
        
        if (lineCount == lineNumber) 
		{
            fputs(newContent, tempFile);
            replaced = 1;
        } 
		else 
		{
            fputs(buffer, tempFile);
        }
    }

    // 指定行がファイル内に存在しなかった場合、末尾に追加
    if (!replaced) {
        fputc('\n', tempFile); // 既存の内容と区切る
        fputs(newContent, tempFile);
    }

    fclose(file);
    fclose(tempFile);

    // Delete the original file and rename the temporary file to the original file's name
    remove(filename);
    rename("temp.txt", filename);
}

int main()
{
	// test for 1st question
	char test1[] = "test1.txt";
	// char stirng[] = "testtesttest\naaaaa\nbbbbb\nccccc";

	// createAndWriteFile(test1, stirng);

	// // test for 2nd question
	// readFile(test1);

	// test for 3nd qeestion 

	// char add[] = "Good job!\n";
	// appendToFile(test1, add);


	// test for 4th question
	modifyLineInFile(test1, 100, "You did it!");



	return 0;
}