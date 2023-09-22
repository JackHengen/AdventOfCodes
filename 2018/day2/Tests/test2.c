#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void firstTest()
{
    char *str = (char *)calloc(2, sizeof(char));
    printf("Length after calloc: %lu\n", strlen(str));
    str[0] = 'a';
    str[1] = '\0';
    printf("Length after assigning a value to the first int in the pointer: %lu\n", strlen(str));
    printf("Value of the first int: %c\n", str[0]);
}

void secondTest()
{
    char *str1 = "Hello";
    char *str2 = {"H", "e", "l", "l", "o"};
    printf("The length of the First String is: %lu\n", strlen(str1));
    printf("The length of the Second String is: %lu\n", strlen(str2));

    // char *str3 = NULL; // there is actually no memory it points to at all so we are trying to get a non existent address
    // printf("a null *Char has the first value of: %c", str3[0]);

    printf("This is what \\0 looks like printed: \0........"); // basically stops printing at the \0 because printf takes it as terminating
    printf("\nShould be able to print after");
}
int main()
{
    firstTest();
    secondTest();
}