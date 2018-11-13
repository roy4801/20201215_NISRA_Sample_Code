#include <stdio.h>

int main() {
    int num = 0x1234ABCD;
    char *ptrNum = (char *) &num;

	printf("Let num = 0x%X\n\n", num);
	printf("num is allocated at:\n   Address | Value\n");
    for (int i = 0; i < 4; i++)
        printf("%10p |  0x%02X\n", (void *) ptrNum, (unsigned char) *ptrNum++);

    return 0;
}
