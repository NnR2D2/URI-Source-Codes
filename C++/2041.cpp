#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 1; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
void lookandsay(int n)
{
  string s = "3";
  fl(n)
  {
    string temp = "";
    int cnt = 1;
    char prev = s[0];
    fl(s.size())
    {
      if (s[i] == prev)
        cnt++;
      else
      {
        temp += to_string(cnt) + prev;
        cnt = 1;
        prev = s[i];
      }
    }
    temp += to_string(cnt) + prev;
    s = temp;
  }
  cout << s << endl;
}

int main()
{
  int n;
  while (cin >> n && n)
  {
    lookandsay(n);
  }
  return 0;
}
