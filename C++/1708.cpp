#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

  int a, b;
  cin >> a >> b;
  for (int i = 1;; i++)
  {
    int d = (abs)(a * i - b * i);
    if (d >= max(a, b))
    {
      cout << i << endl;
      break;
    }
  }

  return 0;
}
