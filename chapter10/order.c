#include <stdio.h>

int data[2] = {100, 200};
int moredata[2] = {300, 400};

int main(void){
    int * p1, * p2, * p3;
    
    p1 = p2 = data;
    p3 = moredata;

    printf("*p1 = %5d *p2 = %5d *p3 = %7d\n", *p1, *p2, *p3);
    printf("*p1++ = %2d *++p2 = %2d (*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
    printf("*p1 = %5d *p2 = %5d *p3 = %7d\n", *p1, *p2, *p3);

    return 0;
}