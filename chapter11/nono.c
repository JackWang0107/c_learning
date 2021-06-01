#include <stdio.h>

int main(void){
    char side_a[] = "Side A";
    char dont[] = {'W', 'O', 'W', '!'};
    char side_b[] = "Side B";

    puts(dont);
    printf("%15s %15s %15s\n", "side_a[]", "dont[]", "side_b[]");
    printf("%15p %15p %15p\n", side_a, dont, side_b);

    return 0;
}