#include<stdio.h>
int main(void)
{
	long int a,i=0;
	printf("������һ����\n");
	scanf("%ld",&a);
	while(a>=10)
	{
		a=a/10;
		i=++i;
	}
	printf("����һ��%ldλ��",i+1);
	return 0;
	
 } 
