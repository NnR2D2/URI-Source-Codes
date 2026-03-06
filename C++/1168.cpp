#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

  int i, t;
  cin >> t;
  string s;
  while (t--)
  {

    cin >> s;
    int n = s.length();
    int sum = 0;
    for (i = 0; i < n; i++)
    {
      switch (s[i])
      {
      case '0':
        sum += 6;
        break;
      case '1':
        sum += 2;
        break;
      case '2':
        sum += 5;
        break;
      case '3':
        sum += 5;
        break;
      case '4':
        sum += 4;
        break;
      case '5':
        sum += 5;
        break;
      case '6':
        sum += 6;
        break;
      case '7':
        sum += 3;
        break;
      case '8':
        sum += 7;
        break;
      case '9':
        sum += 6;
        break;
      }
    }
    cout << sum << " leds" << endl;
  }
  return 0;
}

