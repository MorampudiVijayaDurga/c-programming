//swapping of two numbers
#include <stdio.h>
int n,m,temp;
int main()
{
  printf("please enter first number:",n);
  scanf("%d",&n);
  printf("enter second number:",m);
  scanf("%d",&m);
  temp=n;
  n=m;
  m=temp;
  printf("swaping numbers are \nn=%d\nm=%d",n,m);
}
