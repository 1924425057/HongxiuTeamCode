#include<stdio.h>
int main()
{
	int n,chengji,i;
	float sum,a;
	printf("������ѧ��������"); 
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("������ѧ���ɼ���");
		scanf("%d",&chengji);
		if(chengji<0||chengji>100)
		{
		printf("�ɼ�����,�������룺\n");
		i--;
		continue;
		}
		sum=sum+chengji;
	}
	a=sum/n;
	printf("%f",a);
	return 0;
}
