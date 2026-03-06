#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

  string str;
  cin >> str;
  int n = str.length();
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    if (str[i] == '1')
    {
      cnt++;
    }
  }
  if (cnt % 2 == 0)
  {
    cout << str << '0' << endl;
  }
  else
    cout << str << '1' << endl;
  return 0;
}
