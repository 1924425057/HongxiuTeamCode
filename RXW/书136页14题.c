#include<stdio.h>
int main(void)
{
	int i=99,j,a=5;
LA:	
	for(i++;i<1000;i++)//�������������λ�� 
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0&&i>j)//�жϲ������� 
			{
				goto LA;
			}
		}
		printf("%-5d",i);//������� 
		a=a+1;
		if(a%5==0)//���һ�� 
		{
			printf("\n");
		}
	}
	return 0;
 } 
