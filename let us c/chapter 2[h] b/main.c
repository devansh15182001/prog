#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("enter five digit no.");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    d=a%10;
    a=a/10;
    e=a%10;
    a=a/10;
    printf("%d%d%d%d%d",b,c,d,e,a);
    return 0;
}
