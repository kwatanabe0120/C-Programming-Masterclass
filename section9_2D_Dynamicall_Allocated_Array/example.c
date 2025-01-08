// #include<stdio.h>
// #include<stdlib.h>



// int main()
// {
// 	int *arr[5];
// 	int i;

// 	for (i = 0; i< 5; i++)
// 	{
// 		arr[i] = (int *)calloc(3,sizeof(int));
// 	}
// 	arr[1][1] = 999;
// 	printf("%d ", arr[1][0]);
// 	printf("%d ", arr[1][1]);
// 	printf("%d ", arr[1][2]);
// 	printf("%d ", arr[1][3]);



// 	return 0;
// }


#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr[5]; // ポインタの配列（スタック領域に確保）
    int i;

    // 各ポインタに動的メモリを割り当て
    for (i = 0; i < 5; i++) {
        arr[i] = (int *)calloc(3, sizeof(int));
    }

    // ポインタ配列自体のアドレスを出力（スタック領域）
    printf("ポインタ配列（スタック領域）:\n");
    for (i = 0; i < 5; i++) {
        printf("&arr[%d]: %p\n", i, (void *)&arr[i]);
    }

    // 各ポインタが指すアドレスを出力（ヒープ領域）
    printf("\n各ポインタが指しているヒープメモリ領域:\n");
    for (i = 0; i < 5; i++) {
        printf("arr[%d]: %p\n", i, (void *)arr[i]);
    }

    // メモリ解放
    for (i = 0; i < 5; i++) {
        free(arr[i]);
    }

    return 0;
}