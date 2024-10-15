//greatest of three numbers 
#include <stdio.h>
int n1,n2,n3;
int main()
{
  printf("please enter a number:",n1);
  scanf("%d",&n1);
  printf("please enter a number:",n2);
  scanf("%d",&n2);
  printf("please enter a number:",n3);
  scanf("%d",&n3);
  if ((n1>n2)&&(n1>n3))
  {
      printf("%d is greatest number",n1);
     
  }
  else if((n2>n1)&&(n2>n3))
  {
      printf("%d is greatest number",n2);
  }
  else
  {
      printf("%d is greatest number",n3);
  }
}
