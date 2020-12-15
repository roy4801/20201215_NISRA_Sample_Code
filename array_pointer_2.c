#include <stdio.h>

void len(char * s)
{
    printf("%d\n", sizeof(s));
}

int main()
{
    char s[10] = "roy4801";
    printf("%d\n", sizeof(s));
    len(s);
}