#include<stdio.h>
int main()
{
	int x;
	for(x=0;x<=1000;x++)
	{
		if(x%2)
		{
			printf("���������%d\n",x);
		}
		else
		{
			printf("���ż����%d\n",x);
		}
	}
	return 0;
}
