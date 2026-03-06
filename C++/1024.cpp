#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  cin.ignore();
  while (t--)
  {
    string str;
    getline(cin, str);
    int n = str.length();
    int d = (n / 2);
    for (int i = 0; i < n; i++)
    {
      if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        str[i] += 3;
      
    }
    reverse(str.begin(), str.end());
    for (int i = 0; i < d; i++)
      cout << str[i];
    for (int i=d; i < n; i++)
      printf("%c", str[i] - 1);
    cout << endl;
  }
  return 0;
}
