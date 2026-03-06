#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 2; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    ll a, prime = 0;
    cin >> a;
    fl(a)
    {
      if (a % i == 0)
      {
        prime++;
        break;
      }
    }
    if (prime > 0)
      cout << a << " nao eh primo" << endl;
    else
      cout << a << " eh primo" << endl;
  }
  return 0;
}
