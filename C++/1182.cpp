#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
  double arr[12][12], sum = 0, avg, cnt = 0;
  int i, j, n;
  cin >> n;
  char a;
  cin >> a;
  for (i = 0; i < 12; i++)
  {
    for (j = 0; j < 12; j++)
    {
      cin >> arr[i][j];
      if (j==n)
      {
        sum += arr[i][j];
        cnt++;
      }
    }
  }
  if (a == 'S')
    cout <<fixed<<setprecision(1)<< sum << endl;
  else if (a == 'M')
    cout << fixed << setprecision(1) << (sum / cnt) << endl;
  return 0;
}
