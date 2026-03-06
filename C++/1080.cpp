#include <stdio.h>

int main()
{
    int x[100],great,y;
    int i = 0;
    while (i<100)
    {
        scanf("%d", &x[i]);
        i++;
    }
    great = x[0];
    i = 0;
    while (i<100)
    {
        if(x[i]>great)
        {    great = x[i];
            y = i + 1;
        }
            i++;
    }
    printf("%d\n%d\n", great, y);

    return 0;
}

