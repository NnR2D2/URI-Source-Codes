#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

  int t;

  while (cin >> t && t)
  {
    for (int i = 0; i < t; i++)
    {
      int n;
      cin >> n;
      stringstream ss;
      ss << setfill('0') << setw(8) << n;
      string padded_str = ss.str();

      bitset<8> bit_sequence(padded_str.c_str());

      unsigned long integer = bit_sequence.to_ulong();
      cout << static_cast<char>(integer);
    }
    cout << endl;
  }
  return 0;
}
