#include <stdio.h>
#include <string.h>

#include "s_gets.c"

#define NLEN 30

struct namect{
    char fname[NLEN];
    char lname[NLEN];
    int letters;
};

struct namect getinfo(struct namect);
struct namect makeinfo(struct namect);
void showinfo(const struct namect);

int main(void){
    struct namect person;

    person = getinfo(person);
    person = makeinfo(person);
    showinfo(person);

    return 0;
}

struct namect getinfo(struct namect pst){
    printf("Please enter your first name.\n");
    s_gets(pst.fname, NLEN);
    printf("Please enter your last name.\n");
    s_gets(pst.lname, NLEN);

    return pst;
}

struct namect makeinfo(struct namect pst){
    pst.letters = strlen(pst.fname) + strlen(pst.lname);

    return pst;
}

void showinfo(const struct namect pst){
    printf("%s %s,your name contains %d letters.\n", pst.fname, pst.lname, pst.letters);
}