#include <stdio.h>

int main(void){
    int a = 99999;
    float b = 1.0;


    printf("%d \n", a);
    printf("%d \n", a*1000000000000);
    printf("%f \n", b*99999999999);
    printf("%f \n", b+10e-32-10e-32);


    return 0;
}