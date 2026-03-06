#include<stdio.h>

 int main()
 {
    char name;
    double salary,value,TOTAL;
     scanf ("%s%lf%lf",&name,&salary,&value);

     printf ("TOTAL = R$ %.2lf\n",salary+value*0.15);
    return 0;
 }


