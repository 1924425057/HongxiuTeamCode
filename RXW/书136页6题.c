#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("������һ��������3λ��������\n");
	scanf("%d",&a);
	if(a<1000&&a>=100)
	{
		printf("����һ��3λ����ÿһλ�ֱ���");
		b=a/100;
		c=(a/10)%10;
		d=(a/1)%10;
		printf("%d,%d,%d",b,c,d);
	}
	else if(a<100&&a>=10)
	{
		printf("����һ��2λ����ÿһλ�ֱ���");
		c=a/10;
		d=(a/1)%10;
		printf("%d,%d",c,d);
	}
	else if(a<10&&a>=0)
	{
		printf("����һ��1λ������һλ����%d",a);
	}
	else
	{
		printf("��tm���ˣ���������");
	}
	return 0;
}
