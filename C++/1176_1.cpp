#include <stdio.h>

int main()
{
    unsigned long long int arr[61];
    int n, i ;
    scanf("%d", &n);
    arr[0] = 0;
    arr[1] = 1;
    for (i = 2; i < 61; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    while (n--)
    {
        scanf("%d", &i);
        printf("Fib(%d) = %llu\n", i,arr[i]);
    }
    return 0;
}
