#include<stdio.h>
int main(void)
{
	int i,j,a;
	for(i=1;i<=11;i++)//������ 
	{
		for(j=1;j<=11;j++)//������ 
		{
			if(i<j&&i<=5&&j<=10&&i+j<=11&&i+j>=3)
			{
				printf("��");
			}
			else if(i==j||i+j==12)
			{
				printf("  ");
			}
			else if(i>j&&i<=10&&j<=5&&i+j<=11&&i+j>=3)
			{
				printf("��");
			}
			else if(i>j&&i>=7&&j<=10&&i+j<=21&&i+j>=13)
			{
				printf("��");
			}
			else if(i<j&&j<=11&&i+j>=13&&i+j<=21)
			{
				printf("��");
			}
		}
		printf("\n");
	}
	return 0;
}
