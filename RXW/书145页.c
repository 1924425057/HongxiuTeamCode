#include<stdio.h>
#define N 10
int main()
{
	int array[10],i,j,t;
	for(i=0;i<10;i++)
	{
		printf("�������%d������Ԫ�أ�",i+1);
		scanf("%d",&t);
		for(j=0;j<i;j++)
		{
			if(array[j]==t)
			{
				printf("Ԫ���Ѿ����ڣ����������룺");
				scanf("%d",&t);
				j=-1;
			}
		}
		array[i]=t;
	}
	return 0;
}
