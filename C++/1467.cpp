#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
  int a, b, c;
  while (cin >> a >> b >> c)
  {

    if (a == b && b == c)
    {
      cout << "*" << endl;
    }
    else if (a == b)
    {
      cout << "C" << endl;
    }
    else if (b == c)
    {
      cout << "A" << endl;
    }
    else if (a == c)
    {
      cout << "B" << endl;
    }
  }

  return 0;
}
