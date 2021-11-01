#include<stdio.h>
int main()
{
	int a=2,b=2,i;
	for(i=3;i<=30;i=i+3)
	{
		b=a*b;
	}
	printf("%d",b);
	return 0;
}
