#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

  double v, x, y, r, i = 1;
  double pi = 3.14;
  while (cin >> v)
  {
    if (v == 0)
      break;

    cin >> x >> y;
    r = (sqrt(x * x + y * y)) / 2;
    if (r <= v)
    {
      cout << "Pizza " << i << " fits on the table." << endl;
      i++;
    }
    else
    {
      cout << "Pizza " << i << " does not fit on the table." << endl;
      i++;
    }
  }
  return 0;
}
