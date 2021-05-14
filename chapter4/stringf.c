#include <stdio.h>
#define S_BLURB "Autentification Success !"

int main(void){

    printf("[012345678901234567890123456789]\n");
    printf("[%2s]\n", S_BLURB);
    printf("[%30s]\n", S_BLURB);
    printf("[%-30s]\n", S_BLURB);
    printf("[%.5s]\n", S_BLURB);
    printf("[%30.5s]\n", S_BLURB);
    printf("[%-30.5s]\n", S_BLURB);

    return 0;
}