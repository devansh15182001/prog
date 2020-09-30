#include <stdio.h>
#include <math.h>
int main()
{
    float t,v,w;
    printf("enter the temp and velocity\n");
    scanf("%f %f",&t,&v);
    w=35.74+0.6215*t+(0.4475*t-35.75)*pow(v,0.16);
    printf("%f",w);
    return 0;
}
