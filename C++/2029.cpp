#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

  double v, d, h,r;
  double pi=3.14;
  while (cin >> v)
  {

    cin >> d;
    r = d / 2;
    cout << "ALTURA = "<<fixed<<setprecision(2)<<v/(pi*pow(r,2))<<endl;
    cout << "AREA = "<<fixed<<setprecision(2)<<(pi*r*r)<<endl;
    
  }
  return 0;
}
