#include <stdio.h>
int main()
{
    int a, b, i;
    while (1)
    {
        int sum = 0;
        scanf("%d%d", &a, &b);
        if (a <= 0 || b <= 0)
            break;
        else if (a > b)
        {
            for (i = b; i <= a; i++)
            {
                printf("%d ", i);
                sum += i;
            }
            printf("Sum=%d\n", sum);
        }
        else
        {
            
            for (i = a; i <= b; i++)
            {
                printf("%d ", i);
                sum += i;
            }
            printf("Sum=%d\n", sum);
        }
    }
    return 0;
}


