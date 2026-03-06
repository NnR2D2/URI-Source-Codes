#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(n) for (int i = 0; i < n; i++)
#define flj(n) for (int j = 0; j < n; j++)
int main()
{

int t;
cin>>t;
while(t--)
{ int n,sum=0;
    cin>>n;
    for(int i=n-1;i>=0;i--)
    {
        sum+=pow(2,i);
    }
    cout<<sum<<endl;
}
 return 0;
}
