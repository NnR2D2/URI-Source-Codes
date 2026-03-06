#include <stdio.h>

int main()
{
    int x,i;
    scanf("%d", &x);
    int y[x];
    for ( i = 0; i < x; i++)
    {
        scanf("%d", &y[i]);
       
    }
    for ( i = 0; i < x; i++)
    {
         if (y[i] == 0)
            printf("NULL\n");
        else if (y[i] % 2 == 0)
        {
            if (y[i] > 0)
                printf("EVEN POSITIVE\n");
            else
                printf("EVEN NEGATIVE\n");
        }
        else
        {
            if (y[i] > 0)
                printf("ODD POSITIVE\n");
            else
                printf("ODD NEGATIVE\n");
        }
    }
    

    return 0;
}
