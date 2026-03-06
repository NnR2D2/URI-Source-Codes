#include <stdio.h>
#include <string.h>

int main()
{
    int c;
    scanf("%d", &c);
    while (c--)
    {
        double d;
        char s[10000];
        scanf("%s", &s);
        d=strlen(s);
        printf("%.2lf\n", d/100);
    }

    return 0;
}
