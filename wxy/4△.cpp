#include<stdio.h>
int main()
{
	int m;//������
	int n;//������
	int i,j;
	printf("����������");
	scanf("%d",&m);
	n=m; 
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j||i+j==n+1)
			printf(" ");
			else printf("*"); 
		}
		printf("\n"); 
	 } 
	 return 0;
 } 
