#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

  string str;
  while (getline(std::cin, str))
  {

    int cnt[10] = {0};
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
      if (str[i] == '0')
        cnt[0]++;
      else if (str[i] == '1')
        cnt[1]++;
      else if (str[i] == '2')
        cnt[2]++;
      else if (str[i] == '3')
        cnt[3]++;
      else if (str[i] == '4')
        cnt[4]++;
      else if (str[i] == '5')
        cnt[5]++;
      else if (str[i] == '6')
        cnt[6]++;
      else if (str[i] == '7')
        cnt[7]++;
      else if (str[i] == '8')
        cnt[8]++;
      else if (str[i] == '9')
        cnt[9]++;
    }
    int index = 0;
    int max = 0;
    for (int i = 0; i < 10; i++)
    {
      if (cnt[i] >= max)
      {
        max = cnt[i];
        index = i;
      }
    }
    cout << index << endl;
  }
  return 0;
}
