#include <stdio.h>

int main(void){
    const int i_FIRST_OZ = 46;
    const int i_NEXT_OZ = 46;
    int ounces, cost;

    printf("  ounces cost\n");
    for (ounces = 1, cost = i_FIRST_OZ; ounces <= 16; ounces++, cost += i_NEXT_OZ){
        printf("%5d     $%4.2f\n", ounces, cost / 100.f);
    }

    return 0;
}