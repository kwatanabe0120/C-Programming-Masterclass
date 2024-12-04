#include <stdio.h>


int main()
{
    char a = 'f';
    char *ptr;
    ptr = &a;
    printf("%ld\n", (long)ptr);
    printf("%ld\n", (long)(ptr+2));

    return 0;
}