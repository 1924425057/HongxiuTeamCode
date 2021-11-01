#include<stdio.h>
#include<math.h> 
int main()
{
	int a,b,c,e;
	float d,s;
	printf("Çë");
	scanf("%d%d%d",&a,&b,&c);
	e=(a+b>c&&a+c>b&&b+c>a);
	if(e!=0)
	{
	d=(a+b+c);
	s=sqrt(d*(d-a)*(d-b)*(d-c));
	printf("ÊÇ£¬s=%f",s);
	}
	else
	printf("²»ÊÇ");
	return 0;
}
