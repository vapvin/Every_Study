#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int a[] = {1,2,3,4,5,6,7,8,9,10};

    int i;

    for (i = 0; i < 10; i++ ) {
        printf("%d \n", &a[i]);
    }

    system("pause");

    return 0;
    
}