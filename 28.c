#include <stdio.h>

int main() 
{
	int arr[10],i,n;
	printf("enter size of the array:");
	scanf("%d",&n);
	printf("\n enter array elments:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		printf("\n%d %d",arr[i],i);
	}
	return 0;
}
