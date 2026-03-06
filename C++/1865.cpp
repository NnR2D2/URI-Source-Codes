#include <stdio.h>

int main()
{
    int x, a;
    char name[99];
    scanf("%d", &x);
    while (x--)
    {
        scanf("%s%d", name, &a);
        if (name[0] == 'T' && name[1] == 'h' && name[2] == 'o' && name[3] == 'r')
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}


