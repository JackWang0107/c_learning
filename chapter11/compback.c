#include <stdio.h>
#include <string.h>

int main(void){
    printf("strcmp(\"%s\", \"%s\") is %d\n", "A", "A", strcmp("A", "A"));
    printf("strcmp(\"%s\", \"%s\") is %d\n", "A", "B", strcmp("A", "B"));
    printf("strcmp(\"%s\", \"%s\") is %d\n", "B", "A", strcmp("B", "A"));
    printf("strcmp(\"%s\", \"%s\") is %d\n", "C", "A", strcmp("C", "A"));
    printf("strcmp(\"%s\", \"%s\") is %d\n", "Z", "a", strcmp("Z", "a"));
    printf("strcmp(\"%s\", \"%s\") is %d\n", "apples", "apple", strcmp("apples", "apple"));

    return 0;
}