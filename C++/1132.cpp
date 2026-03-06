#include <stdio.h>

int main()
{
    int x, y, total = 0;
    int i = 1;
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        while (y <= x)
        {
            if (y % 13 != 0)
            {
                total = total + y;
            }
            y++;
        }
        printf("%d\n", total);
    }
    else
    {
        while (x <= y)
        {
            if (x % 13 != 0)
            {
                total = total + x;
            }
            x++;
        }
        printf("%d\n", total);
    }

    return 0;
}
