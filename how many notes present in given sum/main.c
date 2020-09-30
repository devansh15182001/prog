#include <stdio.h>
int main()
{
   int a,s;
   printf("enter the sum\n");
   scanf("%d",&a);
   s=a/100;
   printf("No. of 100 rd note=%d\n",s);
   a=a%100;
   s=a/50;
   printf("No. of 50 rd note=%d\n",s);
   a=a%50;
   s=a/10;
   printf("No. of 10 rd note=%d\n",s);
   a=a%10;
   s=a/5;
   printf("No. of 5 rd note=%d\n",s);
   a=a%5;
   s=a/2;
   printf("No. of 2 rd note=%d\n",s);
   a=a%1;
   s=a/1;
   printf("No. of 1 rd note=%d\n",s);
   getchar();
   return 0;
}
