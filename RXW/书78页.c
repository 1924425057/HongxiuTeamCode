#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,deta,x1,x2,p,q;
	printf("input a,b,c:");
	scanf("%f,%f,%f",&a,&b,&c);
	deta=b*b-4*a*c;       /*���*/ 
	if(fabs(deta)<=1e-6)   /*��С�ڵ���0����Ϊǰ��deta�ǵ�����*/ 
	{
		printf("x1=x2=%7.2f\n",-b/(2*a));     /*��С�ڵ���0����x��û�н������һ�����㣬��������õ�-b��2*a��*/ 
	}
	else
	{
		if(deta>1e-6)   /*������0�������ʽ*/ 
		{
			x1=(-b+sqrt(deta))/(2*a);
			x2=(-b-sqrt(deta))/(2*a);
			printf("x1=%7.2f,x2=%7.2f\n",x1,x2);
		}
		else
		{
			p=-b/(2*a);
			q=sqrt(fabs(deta))/(2*a);
			printf("x1=%7.2f+%7.2f i\n",p,q);
			printf("x2=%7.2f-%7.2f i\n",p,q);
		}
	}
	return 0;
}
