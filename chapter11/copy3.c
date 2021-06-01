#include <stdio.h>
#include <string.h>
#include "s_gets.c"

#define SIZE 40
#define TARGSIZE 7
#define LIM 7

int main(void){
    char qwords[LIM][TARGSIZE];
    char temp[SIZE];
    int i = 0;

    printf("Enther %d words beginning with q:\n", LIM);
    while (i < LIM && s_gets(temp, SIZE)){
        if (temp[0] != 'q')
            printf("%s donesn't begin with q!\n", temp);
        else{
            strncpy(qwords[i], temp, TARGSIZE-1);
            qwords[i][TARGSIZE - 1 ] = '\0';
            i++;
        }
    }
    puts("Here are the words accepted:");
    for ( i = 0; i < LIM; i++)
        puts(qwords[i]);

    return 0;
}