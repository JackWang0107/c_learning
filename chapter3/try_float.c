#include <stdio.h>

int main(void){
    float float1 = 11.2;
    float float2 = .3;
    float float3 = 3.23e3;
    float float4 = -1.56E-10;
    double double1 = 5.32e-5;
    double double2 = 100.;

    printf("float1 = %f\n", float1);
    printf("float2 = %e\n", float2);
    printf("float3 = %f\n", float3);
    printf("float4 = %f\n", float4);
    printf("double1 = %a\n", double1);
    printf("double1 = %A\n", double2);

    return 0;
}