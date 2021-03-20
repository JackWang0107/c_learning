#include <stdio.h>
#include <stdint.h>  
#include <inttypes.h>  

int main(){
    int a;
    int32_t b;
    int_least16_t c;
    int_fast16_t d;

    printf("size of a: %ld", sizeof(a));
    printf("size of b: %ld", sizeof(b));
    printf("size of c: %ld", sizeof(c));
    printf("size of d: %ld", sizeof(d));

    return 0;
}