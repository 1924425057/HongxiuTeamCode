#include<stdio.h>
int cal(int n)
{
	if(n==7)
	{
		return 1;
	}
	else
	{
		return(cal(n+1)+1)*2;
	}
}

int main()
{
	int s;
	s=cal(1);
	printf("��������%d��\n",s);
	return 0;
}
