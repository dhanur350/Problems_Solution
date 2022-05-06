// Sum and difference of two numbers
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int int1, int2;
    float float1, float2;
    scanf("%d %d", &int1, &int2);
    scanf("%f %f", &float1, &float2);
    printf("%d ", int1 + int2);
    printf("%d", int1 - int2);
    printf("\n%.1f ", float1 + float2);
    printf("%.1f", float1 - float2);
    return 0;
}
