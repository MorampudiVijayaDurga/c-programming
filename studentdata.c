// no.of students,marks of student and sum,avg of students
#include <stdio.h>
int n,i,arr[5],sum=0,avg;
int main() 
{
printf("enter the no.of studentds:",n);
scanf("%d",&n);;
for(i=0;i<n;i++)
{
    printf("enter the student marks:",arr[i]);
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
    printf("sum of marks: %d\n",sum);

}
avg=sum/n;
printf("average marks:%d\n",avg);
}