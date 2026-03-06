#include <bits/stdc++.h>
using namespace std;
int main()
{

  int t;
  while (cin >> t&&t)
  {
    while (t--)
    {
      long long int n;
      cin >> n;
      long long int sum = 1;
      if (n==1)
      {
        cout << n << " nao eh perfeito" << endl;
        continue;
      }
      for (int i = 2; i <= sqrt(n); i++)
      {
        if (n % i == 0)
          sum += i+n/i;
      }
      if (sum == n)
        cout << n << " eh perfeito" << endl;
      else
        cout << n << " nao eh perfeito" << endl;
    }
  }
  return 0;
}
