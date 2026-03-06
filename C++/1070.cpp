#include <iostream>
 
using namespace std;
 
int main() {
 
  int x,t=6;
  cin>>x;
  if(x%2==0)
  x++;
  while(t--)
  {cout<<x<<endl;
  x+=2;}
 
    return 0;
}
