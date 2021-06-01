#include <stdio.h>
#include "s_gets.c"

#define ANSWER "Grant"
#define SIZE 40

int main(void){
    char try[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    while (try != ANSWER){
        puts("No, that's wrong. Try again.");
        s_gets(try, SIZE);
    }
    puts("That's right!");

    return 0;
}