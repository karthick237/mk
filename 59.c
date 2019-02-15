#include<stdio.h>
int main()
{
int n[50],i,t=0;
scanf("%d",&n);
for(i=0;n[i]!='\0';i++)
{
t++;
}
printf("%d",t);
return 0;
}
