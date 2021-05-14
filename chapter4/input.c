#include <stdio.h>

int main(void){

    int age;
    float weight;
    char name[40];

    printf("Enter your name : ");
    scanf("%s", name);
    printf("Enter you age : ");
    scanf("%d", &age);
    printf("Enter your weight : ");
    scanf("%f", &weight);

    return 0;
}