#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "s_gets.c"

#define NLEN 30

struct namect{
    char * fname;
    char * lname;
    int letters;
};

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *);
void cleanup(struct namect *);

int main(void){
    struct namect person;

    getinfo(&person);
    makeinfo(&person);
    showinfo(&person);

    return 0;
}

void getinfo(struct namect * pst){
    char temp[NLEN];
    printf("Please enter your first name.\n");
    s_gets(temp, NLEN);
    pst->fname = (char *) malloc(sizeof(char) * (strlen(temp) + 1));
    strcpy(pst->fname, temp);

    printf("Please enter your last name.\n");
    s_gets(temp, NLEN);
    pst->lname = (char *) malloc(sizeof(char) * (strlen(temp) + 1));
    strcpy(pst->lname, temp);
}

void makeinfo(struct namect * pst){
    pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo(const struct namect * pst){
    printf("%s %s,your name contains %d letters.\n", pst->fname, pst->lname, pst->letters);
}

void cleanup(struct namect * pst){
    free(pst->fname);
    free(pst->lname);
}