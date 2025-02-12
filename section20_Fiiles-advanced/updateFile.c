#include<stdio.h>

typedef struct point
{
	int x;
	int y;
} Point;


int main()
{
	Point arr[3] = {{1,2}, {3,9}, {10,15}};
	FILE *fp = fopen("sample.bin", "wb");
	Point newPoint;
	Point updatedPoint; 
	int target = 0;

	if (fp == NULL) return 1;

	fwrite(&arr[0], sizeof(Point), 3,fp);
	printf("The #%d point is (%d, %d)\n", 3, arr[2].x, arr[2].y);
	fclose(fp);


	fp = fopen("sample.bin", "rb+");
	if (fp == NULL) return 1;

	printf("Enter number of point to edit: ");
	scanf("%d", &target);

	printf("Enter new data\nx: ");
	scanf("%d", &newPoint.x);
	printf("y: ");
	scanf("%d", &newPoint.y);

	fseek(fp,sizeof(Point)*(target-1),SEEK_SET);
	fwrite(&newPoint, sizeof(Point), 1,fp);

	 // 書き込み後、該当のデータを再読み込み
    fseek(fp, sizeof(Point) * (target - 1), SEEK_SET);
    fread(&updatedPoint, sizeof(Point), 1, fp);

    // コンソールに出力（ユーザーが入力したデータではなく、ファイルから取得したデータ）
    printf("Updated Point #%d: (%d, %d)\n", target, updatedPoint.x, updatedPoint.y);

	fclose(fp);

	return 0;
}