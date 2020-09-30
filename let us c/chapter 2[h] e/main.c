#include <stdio.h>
#include <math.h>

int main()
{
    float l1,l2,o1,o2,d;
    printf("enter the latitude\n");
    scanf("%f %f",&l1,&l2);
    printf("enter the longitude\n");
    scanf("%f %f",&o1,&o2);
    l1=l1*3.14/180;
    l2=l2*3.14/180;
    o1=o1*3.14/180;
    o2=o2*3.14/180;
    d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(o2-o1));
    printf("%f",d);
    return 0;
}
