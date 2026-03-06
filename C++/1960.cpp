#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{
  int n;
  cin >> n;
  if (n / 1000 > 0)
  {
    cout << 'M';
    n %= 1000;
  }
  if(n/900>0)
  {
    cout<<"CM";
    n%=900;
  }
  if (n / 500 > 0)
  {
    cout << 'D';
    n %= 500;
  }
  if(n/400>0)
  {
    cout<<"CD";
    n%=400;
  }
  if (n / 100 > 0)
  {fl(n/100)
    cout << 'C';
    n %= 100;
  }
  if(n/90>0)
  {
    cout<<"XC";
    n%=90;
  }
  if (n / 50 > 0)
  {
    cout << 'L';
    n %= 50;
  }
  if(n/40>0)
  {
    cout<<"XL";
    n%=40;
  }
  if (n / 10 > 0)
  {fl(n/10)
    cout << 'X';
    n %= 10;
  }
  if(n/9>0)
  {
    cout<<"IX";
    n%=9;
  }
  if (n / 5 > 0)
  {
    cout << 'V';
    n %= 5;
  }
  if(n/4>0)
  {
    cout<<"IV";
    n%=4;
  }
  if (n / 1 > 0)
  {fl(n/1)
    cout << 'I';
  }
  cout<<endl;

  return 0;
}
