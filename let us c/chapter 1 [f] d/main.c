#include <stdio.h>
int main()
{
    float a,c,e;
    printf("enter the temp in fahrenheit \n");
    scanf("%f",&a);
    c=a-32;
    e=c*5/9;
    printf("temp in Celsius  is %f\n ",e);
    return 0;
}
