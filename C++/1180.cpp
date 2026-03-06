#include <stdio.h>

int main()
{
    int n, low, y,i;
    scanf("%d",&n);
    int x[n];
   for ( i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    low = x[0];
    i = 0;
    while (i < n)
    {
        if (x[i] < low)
        {
            low = x[i];
            y = i ;
        }
        i++;
    }
    printf("Menor valor: %d\n", low);
    printf("Posicao: %d\n", y);

    return 0;
}

