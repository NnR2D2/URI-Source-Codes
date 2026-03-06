#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string s[n];
    fl(n)
    {
      cin >> s[i];
    }
    int len = s[0].length();
    int sum=0;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < len; j++)
      {
        sum += (int)(s[i][j]-65) + i + j;
      }
    }
    cout << sum << endl;
  }
  return 0;
}
