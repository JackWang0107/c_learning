#include <stdio.h>

#define I_SQUARES 64

int main(void){

    const double D_CROP = 2e16;
    double current, total;
    int count = 1;

    printf("Square      Grains      Total       Fractions of\n");
    printf("            added       grains      world total\n");
    
    total = current = 1.0;
    printf("%6d %13.2e %12.2e %12.2e \n", count, current, total, total/I_SQUARES);
    while (count < I_SQUARES)
    {
        count ++;
        current = 2.0*current;
        total = total + current;
        printf("%6d %13.2e %12.2e %12.2e \n", count, current, total, total/I_SQUARES);
    }
    
    return 0;
}