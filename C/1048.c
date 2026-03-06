#include <stdio.h>
int main()
{
    float a,in;
    scanf("%f", &a);
    if (a>=0&&a<=400.00)
    {
        in = a * .15;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",a+in,in);
    }
    else if (a==400.01&&a<=800.00)
    {
        in = a * .12;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",a+in,in);
    }
    else if (a>=800.01&&a<=1200.00)
    {
        in = a * .10;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",a+in,in);
    }
    else if (a>=1200.01&&a<=2000.00)
    {
        in = a * .07;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",a+in,in);
    }
    else if (a>2000.00)
    {
        in = a * .04;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",a+in,in);
    }
    return 0;
}

