//number pattern
#include <stdio.h>
int i,j,n;
int main()
{
printf("enter no.of rows and colmns:",n);
scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
 
}
