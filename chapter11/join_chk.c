#include <stdio.h>
#include <string.h>

#include "s_gets.c"

#define SIZE 30
#define BUGSIZE 13

int main(void){
    char flower[SIZE];
    char addon [] = "s smells like old shoes.";
    char bug[BUGSIZE];
    int available;

    puts("What is your favorite flower?");
    s_gets(flower, SIZE);
    if (strlen(addon) + strlen(flower) + 1 <= SIZE)
        strcat(flower,  addon);
    puts(flower);
    puts("What is your favorite  bug?");
    s_gets(bug, BUGSIZE);
    available = BUGSIZE - strlen(bug) - 1;
    strncat(bug, addon, available);
    puts(bug);

    return 0;
}