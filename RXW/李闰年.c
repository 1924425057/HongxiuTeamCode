#include<stdio.h>
int main()
{
	int s;
	printf("����һ�����:");
	scanf("%d",&s);
   	if(s%4==0)
   	{
   		if(s%100!=0||s%400==0)
			printf("%dΪ����",s);
		else
		{
			printf("��������"); 
		}
	}
	else
		printf("%d��Ϊ����",s);
	return 0;
}

