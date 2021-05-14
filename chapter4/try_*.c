#include <stdio.h>

int main(void){

    float afloat = 100.0;

    printf("This program is used to try * for printf and scanf function\n");
    printf("In printf function, * is used to set width for output , so afloat : %*f ===\n", 30, afloat);

    printf("However, in scanf function, * is used skip input, which are very useful in read files\n");
    printf("Please enter 4 numbers: ");

    int a, b, c,d;
    scanf("%d %*d %*d %d", &a, &b, &c, &d);
    printf("The program has read : %d\t%d\t%d\t%d", a, b, c, d);

    return 0;
}