#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int t;
  cin >> t;
  double v, total_spent = 0, total_kg = 0;
  string fruit_name;
  for (int i = 0; i < t; i++)
  {
    int sum[t] = {0};
    cin >> v;
    total_spent += v;
    cin.ignore();
    getline(cin, fruit_name);
    int len = fruit_name.length();
    for (int j = 0; j < len; j++)
    {
      if (fruit_name[j] == ' ')
        sum[i]++;
    }
    cout << "day " << i + 1 << ": " << sum[i] + 1 << " kg" << endl;
    total_kg += sum[i]+1;
  }
  cout<<fixed<<setprecision(2)<<total_kg/t<<" kg by day"<<endl;
  cout << "R$ " << fixed << setprecision(2) <<total_spent / t << " by day" << endl;

  return 0;
}
