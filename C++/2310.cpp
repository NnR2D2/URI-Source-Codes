#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

  int t;
  cin >> t;
  double a[t], b[t], c[t], x[t], y[t], z[t];
  double sum_a = 0, sum_b = 0, sum_c = 0, sum_x = 0, sum_y = 0, sum_z = 0;
  string s[t];
  fl(t)
  {
    cin >> s[i] >> a[i] >> b[i] >> c[i] >> x[i] >> y[i] >> z[i];
    sum_a += a[i];
    sum_b += b[i];
    sum_c += c[i];
    sum_x += x[i];
    sum_y += y[i];
    sum_z += z[i];
  }
printf("Pontos de Saque: %.2lf %%.\n", (sum_x / sum_a) * 100);
printf("Pontos de Bloqueio: %.2lf %%.\n", (sum_y / sum_b) * 100);
printf("Pontos de Ataque: %.2lf %%.\n", (sum_z / sum_c) * 100);
  return 0;
}
