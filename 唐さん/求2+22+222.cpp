#include<stdio.h>
int main()
{
	int n,i=1;
	long int a=2,s=0;
	printf("���s=2+22+222+...+22222222(n��)��������n:");
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
