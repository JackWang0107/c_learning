#include <stdio.h>
#define I_SEC_PER_MIN 60

int main(void){
    int sec, min, left;

    printf("Convert seconds to minutes and seconds!\n");
    printf("Enter the number of seconds (<=0 to quit)\n");
        scanf("%d", &sec);

    while (sec > 0)
    {
        min = sec / I_SEC_PER_MIN;
        left = sec % I_SEC_PER_MIN;
        printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
        printf("Enter  next value (<=0 to quit)\n");
        scanf("%d", &sec);
    }
    printf("Done!\n");

    return 0;
}