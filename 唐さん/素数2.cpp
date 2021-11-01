#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i;
	scanf("%d",&a);
	i=sqrt(a); 
	for(b=2;b<a;b++)
	{
		if(a%b==0)
		break;
	}
	if(b>i)
	printf("%d «",a);
	else
	printf("%d≤ª «",a);
	return 0;
}
