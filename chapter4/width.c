#include <stdio.h>
#define PAGE 959

int main(void){
    printf("*0123456789*\n");
    printf("*%d*\n", PAGE);
    printf("*%2d*\n", PAGE);
    printf("*%10d*\n", PAGE);
    printf("*%-10d*\n", PAGE);
    printf("*%+10d*\n", PAGE);
    printf("*% 10d*\n", PAGE);
    printf("*%.10d*\n", PAGE);

    return 0;
}