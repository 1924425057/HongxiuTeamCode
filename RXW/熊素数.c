#include<stdio.h>
int main()
{
	int d,n;
	scanf("%d",&n);
	for(d=2;d<n;d++)
	{
		if(n%d==0)
		{
			break;
		}
	}
	if(d<n)
	{
		printf("%d ��������",n);
	}
	else
	{
		printf("%d ������",n);
	}
	return 0;
}
