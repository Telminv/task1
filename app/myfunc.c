#include <stdio.h>
#include "myfunc.h"
#include <math.h>
_korny myfunc(double  a,double b,double c) {
  _korny korny;
  korny.x1=0;
  korny.x2=0;
  if(a==0){
      if ( b==0){
          printf("no roots");
          korny.kolvo=0;
          return korny;
        }else{
          korny.x1=(-c)/b;
          korny.kolvo=1;
          return korny;
        }
  }

  double D=b*b-4*a*c;//b*b-4*a*c;
  korny.x1=0;
  korny.x2=0;
  if (D>=0){
      if (D==0){
          korny.kolvo=1;
          korny.x1=(-b + sqrt(D))/(2*a);
        }else{
          korny.kolvo=2;
          korny.x1=(-b - sqrt(D))/(2*a);
          korny.x2=(-b + sqrt(D))/(2*a);
        }
    }else{
      korny.kolvo=0;
    }
  if (korny.kolvo==2){
      printf("roots of the equation:x1 = %.2lf x2= %.2lf ",korny.x1,korny.x2);
    }else{
      if(korny.kolvo==1){
        printf("root of the equation:x = %.2lf ",korny.x1);
        }
        else{
          printf("no roots");
        }
      }
  return korny;
}


int fibonachi(int num) {
    int prev = 1;
    int next = 1;

    if (num < 0)
        return 0;

    if (num <= 2)
        return num;

    int i = 2;
    while (i < num) {
        next += prev;
        prev = next - prev;
        i++;
    }

    return next;
}
