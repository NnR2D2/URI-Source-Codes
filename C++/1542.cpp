#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
  int a, b, c;
  while(cin>>a&&a)
{
  cin >> b >> c;
  int page = (a * b * c) / (c - a);
  if (page == 1)
    cout << page << " pagina" << endl;
  else
    cout << page << " paginas" << endl;
}
  return 0;
}
