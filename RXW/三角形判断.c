#include<stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d,%d,%d",&a,&b,&c);
	if(a+b>c&&b+c>a&&a+c>b)
	{
		if(a==b&&b==c)
		{
			printf("�ȱ�������");
		}
		else if(((a==b)&&b!=c)||((b==c)&&c!=a)||((a==c)&&c!=b))
		{
			printf("����������");
		}
		else if((a*a+b*b==c*c)||(b*b+c*c==a*a)||(a*a+c*c==b*b))
		{
			printf("ֱ��������");
		}
	}
	else
	{
		printf("���������������"); 
	}
	return 0;
 } 
