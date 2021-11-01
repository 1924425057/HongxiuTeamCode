#include<stdio.h>
int main()
{
	double s=0,d=2,a=2,b=1;
	int n,i=1;
	printf("ÇëÊäÈëÏîÊı£º"); 
	scanf("%d",&n);
	for(;i<=n;i++)
	{
	s+=d;
	a+=b;
	b=a-b;
	d=a/b;
	}
	printf("%.4lf",s); 
	return 0;
}
