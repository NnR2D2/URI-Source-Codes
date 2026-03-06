#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

  string s1, s2, s3;
  getline(cin, s1);
  getline(cin, s2);
  getline(cin, s3);
  if (s1 == "vertebrado")
  {
    if (s2 == "ave")
    {
      if (s3 == "carnivoro")
        cout << "aguia" << endl;
      else
        cout << "pomba" << endl;
    }
    else
    {
      if (s3 == "onivoro")
        cout << "homem" << endl;
      else
        cout << "vaca" << endl;
    }
  }
  else{
    if (s2 == "inseto")
    {
      if (s3 == "hematofago")
        cout << "pulga" << endl;
      else
        cout << "lagarta" << endl;
    }
    else
    {
      if (s3 == "onivoro")
        cout << "minhoca" << endl;
      else
        cout << "sanguessuga" << endl;
    }
  }
  return 0;
}

