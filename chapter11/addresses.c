#include <stdio.h>
#define MSG "I'm special"

int main(void){
    char ar[]  = MSG;
    const char *pt = MSG;

    printf("address of \"I'am special\": %p \n", "I'm special");
    printf("\t\t address ar:%p\n", ar);
    printf("\t\t address pt:%p\n", pt);
    printf("\t\t address MSG:%p\n", MSG);
    printf("addressof \"I'm special\": %p\n", "I'm special");

    return 0;
}