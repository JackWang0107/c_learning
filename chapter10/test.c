#include <stdio.h>

int main(void){
    const int num[5];

    printf("%d\n", num == &num[0]);

    return 0;
}