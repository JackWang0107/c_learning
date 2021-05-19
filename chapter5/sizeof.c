#include <stdio.h>

int main(void){
    int n = 0;
    size_t int_size;

    int_size = sizeof (int);
    printf("n = %3d, n has %3zd bytes; all ints have %3zd bytes.\n", n, sizeof n, int_size);

    return 0;
}