#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,x;
	int a,b,c;
	for(i=10;i<1000;i++)
	{
		if(i<100)
		{
			a=i/10%10;//ʮλ
			b=i/1%10;//��λ
			if(a==b) 
			{
				k=sqrt(i);
				for(j=2;j<k;j++)
				{
					if(i%j==0)
					{
						break;
					}
				}
			}
			
		}
		else
		{
			a=i/100%10;//��λ
			b=i/1%10;//��λ 
			if(a==b)
			{
				
			}
		}
	}
}
