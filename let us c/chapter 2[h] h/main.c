#include <stdio.h>
int main()
{
   int a,s,e;
   printf("enter two no.\n");
   scanf("%d,%d",&a,&s);
   e=a;
   a=s;
   s=e;
   printf("\nAfter Swapping\n A=\"%d\" B=\"%d\"",a,s);

    return 0;
}
