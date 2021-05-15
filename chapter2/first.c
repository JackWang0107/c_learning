#include <stdio.h>

int print_words(int num);

int main(void){
    int num;
    num = 1;

    printf("%d", num);
    print_words(num);

    return 0;
}

int print_words(int num){
    printf("I am a simple");
    printf("computer.\n");
    printf("My favorite number is %d because it is first\n", num);
    return 0;
}