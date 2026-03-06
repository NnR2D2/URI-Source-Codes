#include <stdio.h>

int main()
{
    int n, x, y;
    char p;
    scanf("%d", &n);
    scanf("%d %c %d", &x, &p, &y);
    if (p == '+')
    {
        if (x + y <= n)
            printf("OK\n");
        else
            printf("OVERFLOW\n");
    }
    else
    {
        if (x * y <= n)
            printf("OK\n");

        else
            printf("OVERFLOW\n");
    }

    return 0;
}
