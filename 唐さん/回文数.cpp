#include<stdio.h>
int main()
{
	int a,count=0;
	for(a=10000;a<=50000;a++)
	{
		if(a/10000==a%10&&a/1000%10==a/10%10)
		{
			printf("%7d",a);
			count++;
			if(0==count%5)
			printf("\n");
		}
	}
	return 0;
} 
