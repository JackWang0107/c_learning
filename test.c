#include <stdio.h>

int main(void){
    printf("The file name is %s\n", __FILE__);
    printf("The date is %s\n", __DATE__);
    printf("The time is %s\n", __TIME__);
    printf("The line is %d\n", __LINE__);
    
    return 0;
}