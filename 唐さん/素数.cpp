#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	for(b=2;b<a;b++)
	{
		if(a%b==0)
		break;
	}
	if(a/2>b)
	printf("%d≤ª «",a);
	else
	printf("%d «",a);
	return 0;
}
