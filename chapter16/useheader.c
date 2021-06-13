#include <stdio.h>

#include "names.h"

int main(void){
	names candidate;

	get_names(&candidate);
	printf("Let's welcom ");
	show_names(&candidate);
	printf(" to this programs !\n");

	return 0;
}