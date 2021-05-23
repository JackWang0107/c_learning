#include <stdio.h>

#define i_ROWS 6
#define i_CHAR 10

int main(void){
    int row;
    char ch;

    for (row = 0; row < i_ROWS; row++){
        for (ch ='A'; ch < ('A' + i_CHAR); ch++){
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}