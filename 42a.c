#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[100];
scanf("%s %s",a,b);
int c,d;
c=strlen(a);
d=strlen(b);
if(c==d)
{
printf("%s",a);
}
else if(c>d)
{
printf("%s",b);
}
else
{
printf("%s",b);
}
return 0;
}
