#include <stdio.h>

int main()
{
    char str[30];

    for (int i = 1; i <= 10; i++)
    {
        scanf("%s", str);
        if (i == 3 || i == 7 || i == 9)
            printf("%s\n", str);
    }
    return 0;
}
