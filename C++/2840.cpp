#include <stdio.h>

int main()
{

    double v, x, y,pi=3.1415;
    scanf("%lf%lf", &x,&y);
    v = 1.333333333 * pi * (x * x * x);
    printf("%d\n", (int)(y/v));
    return 0;
}
