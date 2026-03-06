#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
  int n;
  while (cin >> n && n)
  {
    string str, final;
    stringstream ss;
    while (n--)
    {
      ss.clear();
      str.clear();
      final.clear();
      cin >> str;
      for (char c : str)
      {
        if (c >= 'a' && c <= 'z')
          ss << c;
      }

      ss >> final;
      reverse(final.begin(), final.end());
      cout << final << endl;
    }
  }

  return 0;
}
