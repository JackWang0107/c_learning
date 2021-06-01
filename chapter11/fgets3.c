#include <stdio.h>
#define STLEN 10

int main(void){
    char word[STLEN];
    int i;

    puts("Enter strings (empty line to quit):");
    while ( fgets(word, STLEN, stdin) != NULL && word[0] != '\n'){
        i = 0;
        while (word[i] != '\n' && word[i] != '\n')
            i++;
        if (word[i] == '\n')
            word[i] = '\0';
        else
            while ( getchar() != '\n')
                continue;
        puts(word);
    }
    puts("Done !");

    return 0;
}