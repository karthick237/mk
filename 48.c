
#include<stdio.h>
int main(void)
{
int n,i,a[20],sum=0;
int avg;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
avg=sum/n;
printf("%d",avg);
}
