#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define STOP '|'

int main(void){
    char c;
    char prev;
    int n_chars = 0L;
    int n_lines = 0;
    int n_words = 0;
    int p_lines = 0;
    bool inword = false;

    printf("Enter the text to be analyzed, | to end input\n");
    prev = '\n';
    while ( (c = getchar()) != STOP){
        n_chars++;
        if ( c == '\n')
            n_lines ++;
        if ( !isspace(c) && !inword){
            inword = true;
            n_words++;
        }
        if (isspace(c) && inword)
            inword = false;
        prev = c;
    }
    if (prev != '\n'){
        p_lines = 1;
    }
    printf("Characters = %ld, words = %d, lines = %d, ", n_chars, n_words, n_lines);
    printf("partial lines = %d\n", p_lines);

    return 0;
}