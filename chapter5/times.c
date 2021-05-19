#include <stdio.h>

int main(void){

    for (int i=1; i<=9 ; i++){
        for (int j=1; j <= i; j++){
            printf("%2d×%2d=%2d    ", i,j,i*j);
        }
        printf("\n");
    }

    return 0;
}