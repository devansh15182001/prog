#include <stdio.h>
#include <math.h>

int main()
{
    float a,s,c,t;
    printf("enter the angle in DEGREE Only\n");
    scanf("%f",&a);
    a=a*3.141592654/180;
    s=sin(a);
    c=cos(a);
    t=tan(a);
    printf("s=%f c=%f t=%f",s,c,t);
    return 0;
}
