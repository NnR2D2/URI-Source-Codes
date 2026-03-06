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
    int cnt = 0, dmd = 0;
    string s;
    cin >> s;
    for (char c : s)
    {
      if (c == '<')
        cnt++;
      else if (c == '>' && cnt > 0)
      {
        cnt--;
        dmd++;
      }
    }
    cout<<dmd<<endl;
  }

  return 0;
}
