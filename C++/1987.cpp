#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

  int n, num;
  while (cin >> n >> num)
  {
    int sum = 0;
    fl(n)
    {
      sum += num % 10;
      num /= 10;
    }
    cout << sum;
    if (sum % 3 == 0)
      cout << " sim" << endl;
    else
      cout << " nao" << endl;
  }

  return 0;
}
