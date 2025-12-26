#include<stdio.h>
double abss(double a){
 if(a<0)
{
  return a*-1;
}
else
 return a;
}
double main()
{
 double x=-69;
 printf("abs of %lf is %lf",x,abss(x));
 return 0;

}
