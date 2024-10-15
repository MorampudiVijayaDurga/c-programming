//multiplication table
#include <stdio.h>
int n,i,mul;
int main()
{
  printf("please enter a number:",n);
  scanf("%d",&n);
  for(i=1;i<=10;i++)
  {
    mul=n*i;  
  
    printf("%d*%d=%d\n",n,i,mul);
  }
}
