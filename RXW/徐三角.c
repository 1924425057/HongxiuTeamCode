#include<stdio.h>
int main()
{
	int a,b,c,d,area;
	printf("������߳�");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a+b<=c)
	{
	printf("����");
	}
	else if(a+c<=b)
	{
	printf("����");
	}
	else if(b+c<=a)
	{
	printf("����");
	}
	else
	{
	d=(a+b+c)/2;
	area=sqrt(d*(d-a)*(d-b)*(d-c));
	printf("%d\n",area);
    }
	return 0;
}
