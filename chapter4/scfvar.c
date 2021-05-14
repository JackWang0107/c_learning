#include <stdio.h>

int main(void){
    int num1, num2, num3, num4;
    int re;

    re = scanf("%d %d %d %d", &num1, &num2, &num3, &num4 );
    printf("You've given %d numbers\n", re);

    return 0;   
}