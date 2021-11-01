#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,j;
	for(i=2;i<1000;i++)
	{
        n=sqrt(i);
        for(j=2;j<=n;j++)
	    {
            if(i%j==0)
	        break;
        }
        if(j>n)
        {
        	if(i<10)
        	printf("%d\n",i);
        	else if(i<100)
        	{
        		if(i%10==i/10)
        		printf("%d\n",i);
			}
			else
			{
				if(i/100==i%10)
				printf("%d\n",i);
			}
		}
    }
	return 0;
}
