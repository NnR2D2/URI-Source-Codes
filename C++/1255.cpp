#include <bits/stdc++.h>
#include <cctype>
using namespace std;
#define ll long long

int main()
{

  int t;
  scanf("%d%*c", &t);
  while (t--)
  {
    string s,dum;
    getline(std::cin, s);
    int i,pos,max = 0;
    int n = s.length();
    int a[123] = {0};
    for (i = 0; i < n; i++)
    {
      if (s[i] >= 65 && s[i] <= 90)
        s[i]+=32;
      if (s[i] >= 97 && s[i] <= 122)
        {
          pos = s[i];
          a[pos]++;
          if(a[pos]>max)
            max = a[pos];
        }
    }
    
    
    for (i = 97; i < 123; i++)
    {
      if (a[i] == max)
      {
        printf("%c", i);
      }
    }
    cout << endl;
    
  }
  return 0;
}
