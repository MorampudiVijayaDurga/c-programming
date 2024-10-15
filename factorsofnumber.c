//factors of number
#include <stdio.h>
int n,i,flag=0;
int main()
{
  printf("please enter a number:",n);
  scanf("%d",&n);
  for(i=1;i<n;i++)
   {
      if (n%i==0)
      {
          printf("%d\t",i);
      }
   }
   printf("and %d arefactors of %d",i,n);
      
   
}
