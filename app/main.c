#include <stdio.h>
#include "myfunc.h"

int main()
{
    double a,b,c;
    printf("enter a\n");
    scanf("%lf",&a);
    printf("%lf\n",a);
    printf("enter b\n");
    scanf("%lf",&b);
    printf("%lf\n",b);
    printf("enter c\n");
    scanf("%lf",&c);
    printf("%lf\n",c);
    myfunc(a,b,c);
    return 0;
}

