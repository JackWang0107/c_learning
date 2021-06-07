#include <stdio.h>
#include <string.h>

#include "s_gets.c"

#define NLEN 30

struct namect{
    char fname[NLEN];
    char lname[NLEN];
    int letters;
};

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *);

int main(void){
    struct namect person;

    getinfo(&person);
    makeinfo(&person);
    showinfo(&person);

    return 0;
}

void getinfo(struct namect * pst){
    printf("Please enter your first name.\n");
    s_gets(pst->fname, NLEN);
    printf("Please enter your last name.\n");
    s_gets(pst->lname, NLEN);
}

void makeinfo(struct namect * pst){
    pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo(const struct namect * pst){
    printf("%s %s,your name contains %d letters.\n", pst->fname, pst->lname, pst->letters);
}