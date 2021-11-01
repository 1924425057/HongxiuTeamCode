#include<stdio.h>
int main()
{
	int a=100,sum=0;
	for(a>100&&a<2000;sum<1000;a++)
	{
		if(a%3==0)
		sum=sum+a;
	}
	printf("%d",sum); 
	return 0;
} 
