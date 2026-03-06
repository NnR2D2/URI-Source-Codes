#include <stdio.h>

int main()
{
    int i, j, x, y, count = 0;
    scanf("%d %d", &x, &y);
    for (i = y; i <= x; i++)
    {
        scanf("%d", &y);
    }
    for ( j = 0; j < y; x++)
    {
        j = j + x;
        count++;
    }
    printf("%d\n", count);

    return 0;
}

