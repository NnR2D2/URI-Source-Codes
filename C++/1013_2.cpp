#include<stdio.h>

 int main() 
 { 

    int a,b,c,t;
    scanf("%d%d%d",&a,&b,&c);
    t=a;
   if(a<b||a<c){
       if(b<c){
           t=c;
       }
      else{
          t=b;
      } 
   }
   printf("%d eh o maior\n",t);
 
    return 0;
 }
