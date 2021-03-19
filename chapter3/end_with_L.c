#include <stdio.h>

int main(void){

    int a = 100;
    int b = 100L;
    int c = 100l;
    int d = 0100L;
    int e = 0x100L;

    printf("a=%d\nb=%d\nc=%d\nd=%d\ne=%d\n",a,b,c,d,e);

    return  0;
}