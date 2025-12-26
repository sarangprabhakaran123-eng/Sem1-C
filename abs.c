#include<stdio.h>
int abss(int a){
 if(a<0)
{
  return a*-1;
}
else
 return a;
}
int main()
{
 int x=-69;
 printf("abs of %d is %d",x,abss(x));

}
