#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define rfl(n) for (int i = n-1; i >=0; i--)
#define flj(n) for (int j = 0; j < n; j++)
#define pi M_PI
#define mod 1000000007
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)x.size()
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
#define mod1 998244353
#define ps(x,y) fixed<<setprecision(y)<<x
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define nl cout<<endl
#define case cout <<"Case " << k++ << ": " <<
int k=1;
void solve()
{
 ll a,b;
    cin>>a>>b;
    ll sum=0;
    sum+=b*(b+1)/2;
    sum-=a*(a-1)/2;
    cout<<sum<<endl;

}
int main()
{

ll t,i,j;
//cin>>t;
t=1;
while(t--)
{
solve();
}
 return 0;
}
