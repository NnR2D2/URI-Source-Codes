#include <stdio.h>
int main()
{
  int x, y, rows, i, j, number = 1;
  scanf("%d%d", &x, &y);
  if (y % x == 0)
  {
    rows = y / x;
  }
  else
  {
    rows = y / x + 1;
  }

  for (i = 1; i <= rows; i++)
  {
    for (j = 1; j <= x; j++)
    {
      printf("%d", number);
      ++number;
      if(j!=x)printf(" ");
      if (number>y)
        break;
    }
    printf("\n");
  }
  return 0;
}
