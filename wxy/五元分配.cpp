#include<stdio.h>
int main()
{
	int m=0;
	int n=5;
	int i,j,k;
	for(i=0;i<=5;i++)
	for(j=0;j<=10;j++)
	for(k=0;k<=50;k++)
	if(i+j*0.5+k*0.1==n)
	{
		printf("һԪ%d�ţ����%d�ţ�һ��%d��\n",i,j,k);
		m++;
	}
	printf("һ����%d�ַ���",m);
	return 0;
}
