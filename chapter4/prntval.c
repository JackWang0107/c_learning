#include <stdio.h>

int main(void){
    int bph2o = 212;
    int printed_len;

    printed_len = printf("The boil point of water is %d\n", bph2o);
    printf("Last printf function has printed %d letters\n", printed_len);

    return 0;
}