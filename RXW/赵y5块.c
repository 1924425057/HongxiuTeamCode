#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,n;
	n=0;
	double S;
	printf("һ����5Ԫ����ң��һ�������:\n"); 
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=10;j++)
		{
		
			for(k=0;k<=50;k++)
			{
			    S=i+j*0.5+k*0.1;
				if(S==5)
				{
					printf("��Ҫ%d��һԪ,��Ҫ%d��5��,��Ҫ%d��һ��.\n",i,j,k); 
				}
			}
		}
		n=n+(j-2*i);
	 }   
	 printf("һ����%d�ַ���",n);
	 return 0; 
 }

