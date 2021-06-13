#include <stdio.h>

#define PSQR(x) printf("The square of "#x" is %d.\n", x)

int main(void){
	int y = 5;

	PSQR(y);
	PSQR(4+2);

	return 0;
}