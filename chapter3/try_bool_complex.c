#include <stdio.h>
#include <complex.h>        // Use complex to quickly define complex and imaginary

int main(){

    _Bool abool = 0;
    float _Complex acomplex = 10+2*I;

    // You can not use format string to print complex or imaginary directly
    // But can use format string %f to print real and imaginary part
    printf("%f +%fi", creal(acomplex), cimag(acomplex));
    printf("\n");

    return 0;
}