#include <stdio.h>
int main()
{
  int i, x;
  char a[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
  scanf("%d", &x);
  for (i = 0; i < x; i++)
    printf("%c", a[i]);
  printf("\n");

  return 0;
}

