#include<stdio.h>

 int main() 
 { 

     int a,b;
     double c,R;
     scanf("%d%d%lf",&a,&b,&c);
    R=(b*c);
    scanf("%d%d%lf",&a,&b,&c);
    R+=(b*c);
    printf("VALOR A PAGAR: R$ %.2lf\n",R);
 
    return 0;
 }
