#include <stdio.h>

int main(){

    int aInt;
    float aFloat;
    double aDouble;

    size_t sizeInt = sizeof(aInt);
    size_t sizeFloat = sizeof(aFloat);
    size_t sizeDouble = sizeof(aDouble);

    printf("aInt : %zd\n", sizeInt);
    printf("aFloat : %zd\n", sizeFloat);
    printf("sizeDouble : %zd\n", sizeDouble);

    return 0;
}