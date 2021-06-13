#include <stdio.h>
#include <math.h>

#define RAD_TO_DEG (180/ (4* atan1(1)))

#define SQRT(x) _Generic((x),\
	long double: sqrtl,\
	float : sqrtf,\
	default : sqrt\
	)(x)

#define SIN(x) _Generic((x),\
	long double : sinl,\
	float : sinf,\
	default : sin)(x)

int main(void){
	float x = 45.0f;
	double xx = 45.0;
	long double xxx = 45.0l;

	long double y = SQRT(x);
	long double yy = SQRT(x);
	long double yyy = SQRT(x);

	printf("%17Lf\n", y);
	printf("%17Lf\n", yy);
	printf("%17Lf\n", yyy);

	int i = 45;
	yy = SQRT(y);
	printf("%.17Lf\n", yy);
	yyy = SIN(xxx);
	printf("%.17Lf\n", yyy);

	return 0;
}