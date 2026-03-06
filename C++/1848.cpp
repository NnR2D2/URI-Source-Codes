#include <bits/stdc++.h>
using namespace std;

int main()
{
  int results[3] = {0};
  string line;
  int cnt = 0;

  while (cnt < 3)
  {
    getline(cin, line);
    if (line == "caw caw")
    {
      cnt++;
    }
    else
    {
      int bit = 0;
      for (char eye : line)
      {
        if (eye == '*')
        {
          bit = (bit << 1) | 1;
        }
        else
        {
          bit <<= 1;
        }
      }
      results[cnt] += bit;
    }
  }

  for (int i = 0; i < 3; i++)
  {
    cout << results[i] << endl;
  }

  return 0;
}

