#include <stdio.h>

int main()
{
    int i, j, x, y, a, count = 0;
    scanf("%d %d", &x, &y);
    for (i = y; i <= x; i++)
    {
        scanf("%d", &y);
    }
    for (a = x, j = 0; j < y; a++)
    {
        j = j + a;
        count++;
    }
    printf("%d\n", count);

    return 0;
}

