#include<stdio.h>
int main()
{
int i,j;//i��������λ�ڵ�һ��ѭ����j��������λ�ڵڶ���ѭ��
for(i=1;i<=9;i++)//i������ѭ�� 
{
	for(j=1;j<=i;j++)//j������ѭ�� 
	{
	 printf("%d*%d=%-3d",i,j,i*j); 
	} 
	printf("\n");
 } 
return 0;
 } 
