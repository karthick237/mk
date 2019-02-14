#include <stdio.h>

int main(void) 
{
	int i,n,l,array[20];
	scanf("%d %d",&n,&l);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=1;i<=n;i++)
	{
		while(i==l)
		{
			printf("\n%d",array[i]);
			break;
		}
	}
	return 0;
}
