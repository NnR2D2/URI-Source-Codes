#include <stdio.h>

int main()
{

    int b;
    double N;
    scanf("%lf", &N);
    int note = N;
    int coin = (N - note) * 100;
    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", note / 100);
    b = note % 100;
    printf("%d nota(s) de R$ 50.00\n", b / 50);
    b = b % 50;
    printf("%d nota(s) de R$ 20.00\n", b / 20);
    b = b % 20;
    printf("%d nota(s) de R$ 10.00\n", b / 10);
    b = b % 10;
    printf("%d nota(s) de R$ 5.00\n", b / 5);
    b = b % 5;
    printf("%d nota(s) de R$ 2.00\n", b / 2);
    b = b % 2;
    printf("MOEDAS:\n");
    b = b / 1;
    printf("%d moeda(s) de R$ 1.00\n", b);

    printf("%d moeda(s) de R$ 0.50\n", coin / 50);
    b = coin % 50;
    printf("%d moeda(s) de R$ 0.25\n", b / 25);
    b = b % 25;
    printf("%d moeda(s) de R$ 0.10\n", b / 10);
    b = b % 10;
    printf("%d moeda(s) de R$ 0.05\n", b / 05);
    b = b % 5;
    printf("%d moeda(s) de R$ 0.01\n", b);
    return 0;
}

