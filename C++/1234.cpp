#include <bits/stdc++.h>
#include <string.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

  string str;
  while (getline(cin, str))
  {
    int n = str.length();
    int j = 0;

    for (int i = 0; i < n; i++)
    {
      if (str[i] == ' ')
      {
        continue;
      }
      if (j % 2 == 0)
      {
        str[i] = toupper(str[i]);
      }
      else
      {
        str[i] = tolower(str[i]);
      }
      j++;
    }

    cout << str << endl;
  }

  return 0;
}
