#include<stdio.h>
int main()
{
	int i,j,k;
	{
		for(i=1;i<=5;i++)
		{
			for(j=1;j<=10;j++)
			{
				if(i>j&&i+j<=9)
				printf("��");
				else if(i==j||i+j==11)
				printf("  ");
				else if(i+j<=10&&i<j)
				printf("��");
				else if(i<j&&i+j<=15)
				printf("��");
			}
				printf("\n");
	}
		for(i=6;i<=10;i++)
		{
			for(j=1;j<=10;j++)
			{
				if(i>j&&i+j<=19&&i+j>11)
				printf("��"); 
				else if(i==j||i+j==11)
				printf("  ");
				else if(i>j&&i+j<=10)
				printf("��"); 
				else
				printf("��");
			}
			printf("\n");
		}	
	}	
	return 0;
 } 
