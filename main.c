#include "daa.c"
#include <stdio.h>

int main(void)
{
    char *hello;

    arr_alloc(hello, sizeof(char), 15);

    hello = "hello, world! :";

    printf("%s\n", hello);


    arr_add_last(hello, tchar,')');

    printf("%s\n", hello);

    arr_add_first(hello, tchar, 'w');

    printf("%s\n", hello);

    free(hello);
    return 0;
}