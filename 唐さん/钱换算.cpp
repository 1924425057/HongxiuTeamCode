#include<stdio.h>
int main()
{
	int a,b,c,s=0;
	for(a=0;a<=5;a++)
	{
		for(b=0;b<=10;b++)
		{
			for(c=0;c<=50;c++)
			{
				if(a*10+b*5+c*1==50)
				{
				printf("一元：%-3d五角 %-3d一角 %-3d\n",a,b,c);
				s++; 
				}
			}
		}
	}
	printf("%d",s);
	return 0;
}
