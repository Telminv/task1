#include <stdio.h>
#include "myfunc.h"

int main()
{
    double a,b,c;
    int g;
do{
    g = scanf ("%lf%lf%lf",&a, &b, &c);
    }
    while (g != 3);
    myfunc(a,b,c);
    return 0;
}

