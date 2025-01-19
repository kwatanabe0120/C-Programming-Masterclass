#include <stdio.h>

int main() {
    char a = 'A';
    char b = 'B';
    char c = 'C';

    printf("Address of a: %p\n", (void*)&a);
    printf("Address of b: %p\n", (void*)&b);
    printf("Address of c: %p\n", (void*)&c);

    return 0;
}