#include <stdio.h>
 
int main() {
int t;
scanf("%d",&t);
int a;
int cnt=0;
for(int i=0;i<5;i++){
    scanf("%d",&a);
    if(t==a)cnt++;
}
printf("%d\n",cnt);

 
    return 0;
}
