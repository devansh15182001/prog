#include <stdio.h>
int main()
{
   float l,b,r,ar,p,c,ac;
   printf("enter the length of rectangle \n");
   scanf("%f",&l);
   printf("enter the breadth of rectangle \n");
   scanf("%f",&b);
   printf("enter the radius of circle \n");
   scanf("%f",&r);
   c=2*3.14*r;
   ac=3.14*r*r;
   ar=l*b;
   p=2*l+2*b;
   printf("area of rectangle %f \n",ar);
   printf("perimeter of rectangle %f \n",p);
    printf("area of circle %f\n",ac);
     printf("circumference of circle %f\n",c);
    return 0;
}
