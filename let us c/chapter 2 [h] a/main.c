#include <stdio.h>
int main()
{
  int a,b,c,d,e,f,g;
  printf("enter five digit no.\n");
  scanf("%d",&a);
  b=a%10;
  a=a/10;
  c=a%10;
  a=a/10;
  d=a%10;
  a=a/10;
  e=a%10;
  a=a/10;
  f=a%10;
   g=b+c+d+e+f;
   printf("%d",g);
    return 0;
}
