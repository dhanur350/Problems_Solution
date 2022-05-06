// Sum of array elements entered in sequence
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    static int i, a[1000], n, sum;
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("%d", sum);
    return 0;
}
