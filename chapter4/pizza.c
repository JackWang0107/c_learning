#include <stdio.h>

#define PI 3.1415926

int main(void){

    float area, circum, radius;

    printf("What is the radius of your pizza? ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circum = 2 * PI * radius;

    printf("Your basic pizza parameters are as follows:\n");
    printf("\tcircumstance = %f,\t area = %f\n", circum, area);

    return 0;
}