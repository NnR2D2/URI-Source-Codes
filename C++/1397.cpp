#include <stdio.h>

int main()
{

    while (1)
    {
        int t,numx=0,numy=0;
        scanf("%d", &t);
        if (t == 0)
            break;
        while (t--)
        {
            int x, y;
            scanf("%d%d", &x, &y);
            if(x>y)numx++;
            else if(x<y)numy++;
        }
        printf("%d %d\n",numx,numy);
    }
    return 0;
}

