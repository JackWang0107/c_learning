#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "s_gets.c"

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10

struct book
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float values;
};


int main(void){
    struct book library[MAXBKS];
    int count = 0;
    int index, filecount;
    FILE * pbooks;
    int size = sizeof(struct book);

    if ((pbooks = fopen("book.dat", "a+b")) == NULL){
        puts("FileOpenError: Cannot open file book.dat");
        exit(EXIT_FAILURE);
    }

    rewind(pbooks);
    while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1){
        if (count == 0)
            puts("Curret contents of book.dat:");
        printf("%s by %s $%.2f\n", library[count].title, library[count].author, library[count].values);
        count ++;
    }

    filecount = count;
    if (count == MAXBKS){
        fputs("FileWriteError: file %s is full,""book.dat", stderr);
        exit(EXIT_FAILURE);
    }

    puts("Please add new book titles.");
    puts("Press [ enter ] at the start at of a line to stop.");
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0'){
        puts("Now enter the author.");
        s_gets(library[count].author, MAXAUTL);
        puts("Now enter the value.");
        scanf("%f", &library[count++].values);

        while (getchar() != '\n')
            continue;

        if (count < MAXBKS)
            puts("Enter the next title.");
    }

    if (count > 0){
        puts("Here is the list of your books:");
        for (index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].values);
        fwrite(&library[filecount], size, count - filecount, pbooks);
    }
    else
        puts("No books ? Too bad.\n");

    puts("Bye.\n");

    fclose(pbooks);

    return 0;
}