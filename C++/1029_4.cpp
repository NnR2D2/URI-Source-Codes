#include <bits/stdc++.h>
using namespace std;
int cont;
int fib(int n)
{
  cont++;
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  else
    return fib(n - 1) + fib(n - 2);
}
int main()
{
  int n, o;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> o;
    cont = 0;
    printf("fib(%d) = %d calls = %d\n", o, cont - 1, fib(o));
  }
  return 0;
}
