#include <stdio.h>

int main()
{
    int n, i,j, a, x;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        for (j = 0; j < x; j++)
        {
            scanf("%d", &a);
            if (a == 1)
            {
                printf("Rolien\n");
            }
            else if (a == 2)
            {
                printf("Naej\n");
            }
            else if (a == 3)
            {
                printf("Elehcim\n");
            }
            else if (a == 4)
            {
                printf("Odranoel\n");
            }
        }
    }
    return 0;
}

