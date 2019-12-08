#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int a = 5;

    int *b = &a;

    printf("%d \n", b);
    printf("%d \n", *b);

    system("pause");

    return 0;
    
}