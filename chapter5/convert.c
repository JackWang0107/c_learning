#include <stdio.h>

int main(void){
    char ch;
    int i;
    float f1;

    f1 = i = ch = 'C';
    printf("ch = %c ----- i = %d ----- f1 = %2.2f\n", ch, i, f1);
    ch = ch +1;
    i = f1 + 2 * ch;
    f1 = 2.0 * ch + i;
    printf("ch = %c ----- i = %d ----- f1 = %2.2f\n", ch, i, f1);

    ch = 99;
    ch = ch * 4.0 + 1;
    printf("%2c\n", ch);


    return 0;
}