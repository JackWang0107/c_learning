#include <stdio.h>

#define CONVERAGE 350

int main(void){
    int sq_feet;
    int cans;

    printf("Enter number of square feet to be painted:\n");
    while (scanf("%d", &sq_feet) == 1){
        cans = sq_feet / CONVERAGE;
        cans += (sq_feet % CONVERAGE == 0) ? 0 : 1;
        printf("You need %d %s of paint.\n", cans, cans == 1 ? "can" : "cans");
        printf("Enter next value (q to quit) :\n");
    }
    return 0;
}