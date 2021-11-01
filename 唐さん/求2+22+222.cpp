#include<stdio.h>
int main()
{
	int n,i=1;
	long int a=2,s=0;
	printf("求和s=2+22+222+...+22222222(n个)，请输入n:");
	scanf("%d",&n);
	while(i<=n)
	{
		i++;
		s+=a;
		a=a*10+2;
	} 
	 printf("%ld",s);
	return 0; 
}
