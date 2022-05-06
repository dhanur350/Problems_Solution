#include <stdio.h>
int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch;
    scanf("%c", &ch);
    char s[100];
    scanf("%s", &s);
    scanf("\n");
    char sen[100];
    scanf("%[^\n]%*c", &sen);
    printf("%c\n%s\n%s", ch, s, sen);
    return 0;
}