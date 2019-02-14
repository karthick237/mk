#include <stdio.h>

int main(void)
{
	char str[50];
	int i,n;
	scanf("%s %d",str,&n);
	int len;
	len=strlen(str);
	for(i=n;i<=len;i++)
	{
		printf("\n%c",str[i]);
	}

	return 0;
}
