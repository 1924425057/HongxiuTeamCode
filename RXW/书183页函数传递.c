#include<stdio.h>
int max(int x,int y)
{
	int z;
	z=x>y?x:y;
	return(z);
}

int main()
{
	int a,b,c;
	printf("�����������֣�");
	scanf("%d,%d",&a,&b);
	c=max(a,b);
	printf("�����%d\n",c);
	return 0; 
}
