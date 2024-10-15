// reverse of a number
#include <stdio.h>
int main()
{
	int n,i,r,temp=0;
	printf("please enter a number:",n);
	scanf("%d",&n);
	for(i=0;n>0;i++)

	{
		r=n%10;
		n=n/10;
		temp=temp*10+r;
	}

	printf("reverse of number:%d",temp);
}
	