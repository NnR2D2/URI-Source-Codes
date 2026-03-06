#include <bits/stdc++.h>
using namespace std;
// Nitta Nando Roy(222-15-6336)
int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int cnt = 0;
    long long n;
    cin >> n;
    if (n == 2)
    {
      cout << "Prime" << endl;
      continue;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
      if (n % i == 0)
      {
        cnt++;
        if (cnt == 2)
          break;
      }
    }
    if (cnt < 1)
      cout << "Prime" << endl;
    else
      cout << "Not Prime" << endl;
  }
  return 0;
}
