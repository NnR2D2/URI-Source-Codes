#include <stdio.h>
int main()
{
    int i,j,n=7;
    for ( i = 1; i <= 9; i=i+2)
    {
        for ( j = 3; j >0; j--)
        {
            printf("I=%d J=%d\n",i,n);
            n--;
        }
        n += 5;
    }
    
    
    return 0;
}

