#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
  string s;
  while (getline(cin, s))
  {
    int l = s.length();
    int c = 0, d = 0, e = 0, f = 1;
    if (l >= 6 && l <= 32)
    {
      for (int i = 0; i < l; i++)
      {
        if (s[i] >= 'a' && s[i] <= 'z')
          c++;
        if (s[i] >= 'A' && s[i] <= 'Z')
          d++;
        if (s[i] >= '0' && s[i] <= '9')
          e++;

        if (s[i]>=33 && s[i]<=47 || s[i]>=58 && s[i]<=64 || s[i]>=91 && s[i]<=96 || s[i]>=123 && s[i
          f=0;
      }
      if (c && d && e && f)
      {
        cout << "Senha valida." << endl;
      }
      else
      {
        cout << "Senha invalida." << endl;
      }
    }
    else
    {
      cout << "Senha invalida." << endl;
    }
  }

  return 0;
}
