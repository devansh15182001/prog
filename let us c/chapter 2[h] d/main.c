#include <stdio.h>
#include <math.h>
int main()
{
    float x,y,r,t;
    printf("enter the co-ordinate\n");
    scanf("%f %f",&x,&y);
    r=sqrt(x*x+y*y);
    t=atan2(y,x);
    t=t*180/3.14;
    printf("r=%f t=%f\n",r,t);

    return 0;
}
