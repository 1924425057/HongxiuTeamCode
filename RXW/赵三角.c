#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,s;
	printf("���������ε�����\n");
	scanf("%d,%d,%d",&a,&b,&c);
	s=a*b*c; 
	if(a+c>b&&a+b>c&&b+c>a)
	printf("�����γ���%d\n",s); 
	else
	printf("�����β�����");
	return 0;
}
