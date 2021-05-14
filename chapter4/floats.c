#include <stdio.h>

int main(void){
    const double F_RENT = 3852.99;

    printf("*01234567890123456789*\n");
    printf("*%f*\n", F_RENT);
    printf("*%.8f*\n", F_RENT);
    printf("*%20.4f*\n", F_RENT);
    printf("*%-20.4f*\n", F_RENT);
    printf("*%3.1f*\n", F_RENT);
    printf("*%e*\n", F_RENT);
    printf("*%10.3e*\n", F_RENT);

    return 0;
}