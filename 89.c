#include <stdio.h>
int main() 
{
	char str[10];
	int n,i;
	scanf("%s",str);
	n=strlen(str);
	for(i=n-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	return 0;
}
