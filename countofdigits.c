#include <stdio.h>
int main()
{
	int n,i,r;
	printf("please enter a number:",n);
	scanf("%d",&n);
	for(i=0;n>0;i++)

	{
		n=n/10;
	}

	printf("the no.of digits:%d",i);
}
