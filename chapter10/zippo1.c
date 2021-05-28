#include <stdio.h>

int main(void){
    int zippo[4][2] = 
    {
        { 2, 4},
        { 6, 8},
        { 1, 3},
        { 5, 7}
    };

    printf("%15s %15p %15s %15p\n", "zippo = ", zippo, "zippo + 1 = ", zippo + 1);
    printf("%15s %15p %15s %15p\n", "zippo[0] = ", zippo[0], "zippo[0] + 1 = ", zippo[0] + 1);
    printf("%15s %15p %15s %15p\n", "*zippo = ", *zippo, "*zippo + 1 = ", *zippo + 1);
    printf("%15s %15d %15s %15p\n", "zippo[0][0] = ", zippo[0][0], "&zippo[0][0] = ", &zippo[0][0]);
    printf("%15s %15d\n", "*zippo[0] = ", *zippo[0]);
    printf("%15s %15d\n", "**zippo = ", **zippo);
    printf("%15s %15d\n", "zippo[2][1] = ", zippo[2][1]);
    printf("%15s %13d\n", "*(*zippo+2)+1) = ", *(*(zippo+2)+1));

    return 0;
}