#include <stdio.h>

int main(void){
    int i,j = 0;
    while (i < 5){
        printf("%d\t", i);
        ++i;
    }
    printf("\n");

    while (++j < 5)
    {
        printf("%d\t",j);
    }
    printf("\n");
    return 0;
}