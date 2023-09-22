#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *abc = (char *)calloc(strlen("hello\0"), sizeof(char));
    printf("%lu", strlen(abc));
}