#include <stdio.h>
#include <string.h>
#include "s_gets.c"

#define SIZE 80

int main(void){
    char flower[SIZE];
    char addon [] = "S smell like odd shoes.";

    puts("What is your favorite flower?");
    if (s_gets(flower, SIZE)){
        strcat(flower, addon);
        puts(flower);
        puts(addon);
    }
    else
        puts("End of file encountered");
    puts("bye");

    return 0;
}