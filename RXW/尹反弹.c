#include<stdio.h>
int main()
{
	int i;
	float h=100,a=100,sum=0;//h��ʾ�߶� 
	for(i=1;i<=10;i++)
	{
		a=a/2;
		sum=sum+a*2;
	}
	sum=sum+100-2*a;
	printf("������%f\n",sum);
	printf("����%f\n",a);
	return 0;
}

