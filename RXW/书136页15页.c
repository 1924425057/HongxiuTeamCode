#include<stdio.h>
int main(void)
{
	int i,j,x=7;
	char ch;
	for(i=1;i<=4;i++)//������ 
	{
		ch='A';
		for(j=1;j<i*2;j++)//�������һ���ո�б�� 
		{
			printf(" ");
		}
		for(j=1;j<=x;j++)//����ÿ����ĸ��������ѭ�� 
		{
			printf("%2c",ch);
			ch++;
		}
		x=x-2;
		printf("\n");
	}
	return 0;
}

