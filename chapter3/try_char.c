#include <stdio.h>

int main(){

    // Single character must be sourrounded by '
    char grade = 'A';

    // If you want to print single character, remember to do so
    printf("%c", grade);
    printf("\n");

    printf("Try escape sequence:\n");
    printf("\\a: \a\a\a\a\a\a\aaaaaa\taaaaa\naaaaaaaaa\taaaaaa\vaaaaa\f");

    printf("\n");

    return 0;

}