// Function in C
#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    /*if (a>b) {
        if (a>c) {
            if (a>d) {
                return a;
                }
                else{
                    return d;
                }
            }
        }
        else if (b>c) {
            if (b>d) {
                return b;
            }
            else {
                return c;
            }
        }
        else if(c>d){
            return c;
        }
        else{
            return d;
        }
    return 0;*/
    // Largest among a, b, c and d using conditional operator
    return (a > b && a > c && a > d) ? a : ((b > c && b > d) ? b : (c > d ? c : d));
}
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
