#include <stdio.h>

int main()
{
    int x, i = 1;
    scanf("%d", &x);
    do
    {
        if (i % x == 2)
            printf("%d\n", i);
        i++;
    } while (i <= 10000);

    return 0;
}
