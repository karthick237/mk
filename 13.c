#include <stdio.h>
int main() 
{
int n,i,f=1;
scanf("%d",&n);
for(i=2;i<n/2;i++)
{

    if(n%i==0)
    {
       f=0;
    }
    else
    {
       f=1;
    }
}
if(f==1)
{
    printf("prime");
}
else
{
    printf("not prime");
}
}
