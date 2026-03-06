#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

  string str;
  while (getline(cin, str))
  {
    if (str == "*")
      break;
    int n = str.length();
    int l = str[0];
    fl(n)
    {
      if (str[i] == ' ')
      {
        if (str[i + 1] != l && str[i + 1] != l + 32 && str[i + 1] != l - 32)
        {
          cout << "N" << endl;
          break;
        }
      }
      if (i == n - 1)
        cout << "Y" << endl;
    }
  }
  return 0;
}
