#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);
    float x[n], y[n];
    for (i = 0; i < n; i++)
    {
        scanf("%f %f", &x[i], &y[i]);
        if (y[i] == 0)
            printf("divisao impossivel\n");
        else
            printf("%.1f\n", (x[i] / y[i]));
    }

    return 0;
}

