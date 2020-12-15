#include <stdio.h>
#include <string.h>

/* gcc -m32 -fno-stack-protector -o basic_overflow basic_overflow.c */

int main(int argc, char *argv[]){
	char pwd[8] = "NISRA";
    char input[8];
    printf("Give me some input: ");
    scanf("%s", input);
    if(strcmp(pwd, "admin") == 0)
        printf("Yes you pass it!\n\n");
    else printf("No, keep trying.\n\n");
    return 0;
}
