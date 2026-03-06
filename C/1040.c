#include <stdio.h>

int main()
{

    double a, b, c, d, avg, x, f;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    avg = (a * 2 + b * 3 + c * 4 + d * 1) / (2 + 3 + 4 + 1);
    printf("Media: %.1lf\n", avg);
    if (avg >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (avg >= 5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &x);
        printf("Nota do exame: %.1lf\n", x);
        f = (x + avg) / 2;
        if (f >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", f);
    }
    else if(avg<5.0)
    {
        printf("Aluno reprovado.\n");
    }

    return 0;
}




