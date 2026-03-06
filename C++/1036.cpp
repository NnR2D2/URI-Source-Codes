// bhaskara's formula in c
#include <stdio.h>
#include <math.h>

int main()
{

    double a, b, c, R1, R2;
    scanf("%lf%lf%lf", &a, &b, &c);
    if (a == 0 || pow(b, 2) < 4 * a * c)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5lf\nR2 = %.5lf\n", R1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a), R2 = (          /   
    }
    return 0;
}

