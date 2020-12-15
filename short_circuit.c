#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1, b = -1;
    if (a > 0 && b < 0)
        printf("A\n");

    if (a < 0 || b < 0)
        printf("B\n");
}