#include <stdio.h>

int main(){
    int a;
    short int b;
    long int c;
    long long int d;
    unsigned int e;
    unsigned short int f;
    unsigned long int g;
    unsigned long long int h;

    printf("int a: %ld\n", sizeof(a));
    printf("short int b: %ld\n", sizeof(b));
    printf("long int c: %ld\n", sizeof(c));
    printf("long long int d: %ld\n", sizeof(d));
    printf("unsigned int e: %ld\n", sizeof(e));
    printf("unsigned short int f: %ld\n", sizeof(f));
    printf("unsigned long int g: %ld\n", sizeof(g));
    printf("unsigned long long int h: %ld\n", sizeof(h));

    return 0;
}