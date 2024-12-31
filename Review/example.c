#include <stdio.h>

void printArrayReverse(int arr[], int size, int index) {
    // 基底条件: 配列の終端に到達した場合
    if (index >= size) {
        return;
    }
    // 再帰呼び出し（次の要素へ進む）
    printArrayReverse(arr, size, index + 1);

    // 再帰呼び出しの後で処理（逆順で現在の要素を表示）
    printf("%d ", arr[index]);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array in reverse order: ");
    printArrayReverse(arr, size, 0);
    printf("\n");

    return 0;
}