#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	float area;
	printf("������������");
	scanf("%d %d %d\n",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)printf("���Թ���������");
	else printf("�����Թ���������");
	d=a+b+c;
	//d*(d-a)*(d-b)*(d-c);
	area=sqrt(d*(d-a)*(d-b)*(d-c));
	printf("%f",area);
	return 0;
	}
