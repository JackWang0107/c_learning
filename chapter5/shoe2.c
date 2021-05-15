#include <stdio.h>

#define F_ADJUST 7.31

int main(void){
    const double D_SCALE = 0.333;
    double shoe, foot;

    printf("Shoe size (men's)   foot length\n");
    shoe = 3.0;
    while (shoe < 18.5){
        foot = D_SCALE * shoe + F_ADJUST;
        printf("%10.1f  %15.2f inches\n", shoe, foot);
        shoe += 1;
    }

    printf("If the shoe fits, wear it.\n");

    return 0;
}