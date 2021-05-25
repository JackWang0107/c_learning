#include <stdio.h>
#include <iso646.h>

#define PERIOD '.'

int main(void){
    char ch;
    int charcount;

    while ( (ch = getchar()) != PERIOD){
        if ( ch != '"' and ch !='\'')
            charcount ++;
    }
    printf("There are %d non-quote characters.\n", charcount);

    return 0;
}