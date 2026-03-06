#include <stdio.h>
#include <math.h>
int main()
{

    int i, N, f = 1;
    scanf("%d", &N);
    if (N > 0 && N < 13)
    {
        for (i = 1; i <= N; i++)
            f = f * i;
        printf("%d\n", f);
    }

    return 0;
}
