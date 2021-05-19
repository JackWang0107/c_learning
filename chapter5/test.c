#include <stdio.h>

int main(void){
    int a,b = 1;
    int c = (++a) + (b++); 
    printf("%d\n", c);

    return 0;
}