#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 1; j < n; j++)
int main()
{
  int f, n, cnt = 0;
  cin >> f >> n;
  int a[n];
  fl(n) cin >> a[i];
  flj(n)
  {
    if (abs(a[j] - a[j - 1]) > f)
    {
      cnt++;
    }
  }
  if (cnt == 0)
    cout << "YOU WIN" << endl;
  else
    cout << "GAME OVER" << endl;
  return 0;
}
