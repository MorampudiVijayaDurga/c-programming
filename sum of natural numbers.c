//sum of natural numbers

#include <stdio.h>
int main()
{
        int n,i,s=0;
	printf("please enter a number:",n);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
  	{
		s+=i;
	}
    printf("sum of %d is %d ",n,s);
}

