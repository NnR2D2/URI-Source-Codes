#include <stdio.h>

int main()
{
    int i, x, y, a, b, c;
    a = 0;
    b = 0;
    c = 0;
    char ch;
    scanf("%d", &x);
    for (i = 0; i < x; i++)
    {
        scanf("%d %c", &y, &ch);
        if (ch == 'C')
            a = a + y;
        else if (ch == 'R')
            b = b + y;
        else
            c = c + y;
    }
    float d = a + b + c;
    printf("Total: %.0f cobaias\n",d);
    printf("Total de coelhos: %d\n", a);
    printf("Total de ratos: %d\n", b);
    printf("Total de sapos: %d\n", c);
    printf("Percentual de coelhos: %.2f %%\n",(a/d)*100);
    printf("Percentual de ratos: %.2f %%\n", (b/d)*100);
    printf("Percentual de sapos: %.2f %%\n", (c/d)*100);
    

    return 0;
}

