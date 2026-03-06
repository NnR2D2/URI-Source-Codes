#include <stdio.h>

int main()
{
    int i, x,y,a,b,c,d;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    scanf("%d", &x);
    
    for ( i = 0; i < x; i++)
    {
        scanf("%d", &y);
        if(y%2==0)
            a++;
        if(y%3==0)
            b++;
        if(y%4==0)
            c++;
        if(y%5==0)
            d++;

    }
    printf("%d Multiplo(s) de 2\n", a);
    printf("%d Multiplo(s) de 3\n", b);
    printf("%d Multiplo(s) de 4\n", c);
    printf("%d Multiplo(s) de 5\n", d);

    return 0;
}

