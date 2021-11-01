#include<stdio.h>
int main()
{
	int a=1,b=1,c,i;
	printf("%12d%12d",a,b);
	for(i=3;i<=30;i++)
	{
		c=a+b;
		printf("%12d",c);
		if(i%5==0)
		printf("\n");
		a=b;
		b=c;
	}
	return 0;
}
