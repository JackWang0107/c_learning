#include <stdio.h>
#include <math.h>

int main(void){
    const double d_ANSWER = 3.1415926;
    double response;

    printf("What is the value of pi?\n");
    scanf("%lf", &response);
    while (fabs(response - d_ANSWER) > 0.001)
    {
        printf("Try again!\n");
        scanf("%lf", &response);
    }
    printf("Close enough!\n");

    return 0;
}