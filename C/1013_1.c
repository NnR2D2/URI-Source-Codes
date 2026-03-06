#include <stdio.h>

int main()
{

    int a, b, c, t;
    scanf("%d%d%d", &a, &b, &c);

    if (c > b && c > a)
    {
        printf("%d eh o maior\n", c);
    }
    else if (b > a && b > c)
    {
        printf("%d eh o maior\n", b);
    }
    else
    {
        printf("%d eh o maior\n", a);
    }

    return 0;
}
