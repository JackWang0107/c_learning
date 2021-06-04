#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int static static_store = 0;
int inner_store = 0;
const char * pcg = "String Literal";

int main(){
    int auto_store = 0;
    char auto_string[] = "Auto char Array";
    int * pi;
    char * pc1;

    pi = (int *) malloc(sizeof(int));
    *pi = 35;
    
    pc1 = (char *) malloc(strlen("Dynamic String"+1));
    strcpy(pc1, "Dynamic String");

    printf("%40s %4d, at %15p\n", "static_store: ", static_store, &static_store);
    printf("%40s %4d, at %15p\n", "auto_store: ", auto_store, &auto_store);
    printf("%40s %4d, at %15p\n", "*pi: ", *pi, &pi);
    printf("%40d, at %15p\n",  *pi, &pi);
    printf("%40s, at %15p\n",  pcg, pcg);
    printf("%40s, at %15p\n",  auto_string, auto_string);
    printf("%40s, at %15p\n",  pc1, pi);
    printf("%40s, at %15p\n",  "Quoted String", "Quoted String");

    return 0;
}