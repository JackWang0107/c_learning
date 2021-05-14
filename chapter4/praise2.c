#include <stdio.h>
#include <string.h>

#define PRAISE "You are an extraodrinay being"

int main(void){
    char name[40];

    printf("Tell me what's your name? ");
    scanf("%s", name);
    printf("Your name has %zd letters and occupied %zd memory cells.\n", strlen(name), sizeof(name));
    printf("And phrase of praise has %zd memory cells.\n", sizeof PRAISE );

    return 0;
}