#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

  double a, b, t;
  while (cin >> t && t)
  {
    double avg = t / 90;
    int bz = floor(avg * 1);
    int az = ceil(avg * 7);
    cout << "Brasil " << bz << " x Alemanha " << az << endl;
  }
  return 0;
}
