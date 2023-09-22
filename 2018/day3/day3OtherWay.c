#include <stdio.h>
#include <stdlib.h>
enum Example
{
    A,
    B,
    C
} typedef Examp2;

typedef Examp2 Examp3;

typedef int g;

struct clothClaim
{
    int id;
    int height;
    int width;
    int fromLeft;
    int fromRight;
} typedef clothClaim;

int main()
{
    FILE *file = fopen("input.txt", "r");
    clothClaim cc;
    fscanf(file, "#%d @ %d,%d: %dx%d\n", &cc.id, &cc.height, &cc.width, &cc.fromLeft, &cc.fromRight);
    printf("%d", cc.id);
}