#include <stdio.h>
#define SPACE ' '

int main(void){
    char ch;

    do{
        ch = getchar();
        if (ch == SPACE)
            putchar(ch);
        else
            putchar(ch+1);
    }while (ch != '\n');

    return 0;
}