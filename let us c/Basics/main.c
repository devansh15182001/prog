#include<stdio.h>
int main()
{
int p,n;
float r,si;
printf("enter the value of P");
scanf("%d",&p);
printf("enter the value of N");
scanf("%d",&n);
printf("enter the value of R");
scanf("%f",&r);
si=p*n*r/100;
printf("%f",si);
return 0;
}
