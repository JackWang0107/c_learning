#include <stdio.h>

#define F_ADJUST 7.31

int main(void){

    const double D_SCALE = 0.333;
    double shoe, foot;

    shoe = 9.0;
    foot = D_SCALE * shoe + F_ADJUST;

    printf("Shoe size (men's)   foot length\n");
    printf("%10.1f %15.2f inches\n", shoe, foot);

    return 0;
}