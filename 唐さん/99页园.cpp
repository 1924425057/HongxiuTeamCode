#include<stdio.h>
int main()
{
	int a;
	double pi=3.14159,s;
	for(a=1;a<=10;a++)
	{
		s=pi*a*a;
		if(s>100)
		break;
		printf("a=%d,s=%lf\n",a,s);
	}
	return 0;
}
