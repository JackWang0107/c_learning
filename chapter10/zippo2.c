#include <stdio.h>

int main(void){
    int zippo[4][2] = 
    {
        { 2, 4},
        { 6, 8},
        { 1, 3},
        { 5, 7}
    };
    int (* pz)[2];
    pz = zippo;

    printf("%20s %15p %20s %15p\n ", "pz = ", pz, "pz + 1 = ", pz + 1);
    printf("%20s %15p %20s %15p\n ", "pz[0] = ", pz[0], "pz[0] + 1 = ", pz[0] + 1);
    printf("%20s %15p %20s %15p\n ", "*pz = ", *pz, "*pz + 1 = ", *pz + 1);
    printf("%20s %15d\n", "pz[0][0] = ", pz[0][0]);
    printf("%20s %15d\n", "*pz[0] = ", *pz[0]);
    printf("%20s %15d\n", "**pz = ", **pz);
    printf("%20s %15d\n", "pz[0][0] = ", pz[2][1]);
    printf("%20s %15d\n", "*(*(pz+2)+1)= ", *(*(pz+2)+1));

    return 0;
}                    