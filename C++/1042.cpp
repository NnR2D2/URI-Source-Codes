#include <stdio.h>

int main()
{

    int a, b, c,hi,mi,lo;
    scanf("%d%d%d", &a, &b, &c);

    if (c > b && c > a)
    {
        hi = c;
        if (b>a)
        {
            mi = b;
            lo = a;
        }
        else
        {
            mi = a;
            lo = b;            
        }
        
    }
    else if (b > a && b > c)
    {
         hi = b;
        if (c>a)
        {
            mi = c;
            lo = a;
        }
        else
        {
            mi = a;
            lo = c;            
        }
    }
    else
    {
         hi = a;
        if (b>c)
        {
            mi = b;
            lo = c;
        }
        else
        {
            mi = c;
            lo = b;            
        }
    }
    printf("%d\n%d\n%d\n", lo, mi, hi);
    printf("\n%d\n%d\n%d\n",a,b,c);

    return 0;
}
