#include <stdio.h>

int main()
{
    int i, n, x, q;
    float bill;
    float total = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &q);
        switch (x)
        {
        case 1001:
            bill = 1.50 * q;
            break;
        case 1002:
            bill = 2.50 * q;
            break;
        case 1003:
            bill = 3.50 * q;
            break;
        case 1004:
            bill = 4.50 * q;
            break;
        case 1005:
            bill = 5.50 * q;
            break;

        default:
            break;
        }
        total = total + bill;
    }
    printf("%.2f\n", total);
    return 0;
}

