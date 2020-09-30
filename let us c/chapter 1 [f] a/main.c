#include <stdio.h>
int main()
{
    int s,d,r,t,g;
    printf("enter ramesh basics salary");
    scanf("%d",&s);
    d=s*0.4;
    r=s*0.2;
    t=d+r;
    g=s-t;
    printf("%d",g);
    return 0;
}
