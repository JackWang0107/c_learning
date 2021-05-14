#include <stdio.h>

#define I_PAGES 336
#define I_WORDS 65618

int main(void){
    short num = I_PAGES;
    short nage_num = -I_PAGES;

    printf("num as short and unsigned short: %hd \t %hu\n", num, num);
    printf("nage_num as short and unsigned short: %hd \t %hu\n", nage_num, nage_num);
    printf("num as int and chat: %d \t %c\n", num, num);
    printf("i_words as int, short  and char: %d \t %hd \t %c\n", I_WORDS, I_WORDS, I_WORDS);

    return 0;
}