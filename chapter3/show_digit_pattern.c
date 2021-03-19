#include <stdio.h>

int main(void){

    int num = 100;

    printf("dec = %d, octal = %o, hex = %x\n", num, num, num);
    printf("dec = %d, octal = %#o, hex = %#x\n", num, num, num);

    return 0;
}