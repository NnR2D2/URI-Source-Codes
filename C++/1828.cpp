#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

  int t;
  string s1, s2;
  cin >> t;
  fl(t)
  {
    cin >> s1 >> s2;
    if (s1 == s2)
    {
      cout << "Caso #" << i + 1 << ": De novo!" << endl;
    }
    else if (s1 == "tesoura" && s2 == "papel")
    {
      cout << "Caso #" << i + 1 << ": Bazinga!" << endl;
    }
    else if (s1 == "papel" && s2 == "pedra")
    {
      cout << "Caso #" << i + 1 << ": Bazinga!" << endl;
    }
    else if (s1 == "pedra" && s2 == "lagarto")
    {
      cout << "Caso #" << i + 1 << ": Bazinga!" << endl;
    }
    else if (s1 == "lagarto" && s2 == "Spock")
    {
      cout << "Caso #" << i + 1 << ": Bazinga!" << endl;
    }
    else if (s1 == "Spock" && s2 == "tesoura")
    {
      cout << "Caso #" << i + 1 << ": Bazinga!" << endl;
    }
    else if (s1 == "tesoura" && s2 == "lagarto")
    {
      cout << "Caso #" << i + 1 << ": Bazinga!" << endl;
    }
    else if (s1 == "lagarto" && s2 == "papel")
    {
      cout << "Caso #" << i + 1 << ": Bazinga!" << endl;
    }
    else if (s1 == "papel" && s2 == "Spock")
    {
      cout << "Caso #" << i + 1 << ": Bazinga!" << endl;
    }
    else if (s1 == "Spock" && s2 == "pedra")
    {
      cout << "Caso #" << i + 1 << ": Bazinga!" << endl;
    }
    else if (s1 == "pedra" && s2 == "tesoura")
    {
      cout << "Caso #" << i + 1 << ": Bazinga!" << endl;
    }
    else
    {
      cout << "Caso #" << i + 1 << ": Raj trapaceou!" << endl;
    }
  }
  return 0;
}
