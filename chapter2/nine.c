#include <stdio.h>

int one_three(void);
int two(void);

int main(void){

    printf("Starting now:\n");
    one_three();
    two();
    printf("Done!\n");

    return 0;

}

int one_three(void){
    printf("One\n");
    two();
    printf("Three\n");

    return 0;
}

int two(void){
    printf("Two\n");

    return 0;
}