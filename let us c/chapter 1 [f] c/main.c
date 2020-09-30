#include <stdio.h>
int main()
{
   float a,b,c,d,e,f,g;
   printf("english marks \n");
   scanf("%f",&a);
    printf("phy marks \n");
   scanf("%f",&b);
    printf("chemistry marks \n");
   scanf("%f",&c);
    printf("maths marks \n");
   scanf("%f",&d);
    printf("CS marks \n");
   scanf("%f",&e);
   f=a+b+c+d+e;
   printf("aggregate marks %f\n",f);
   g=f/5;
   printf("percentage = %f\n",g);
    return 0;
}
