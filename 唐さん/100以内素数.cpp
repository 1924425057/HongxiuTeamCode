#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i,s=0;
	for(b=2;b<100;b++)
	{
	    i=sqrt(b);
		for(a=2;a<=b;a++)
		if(b%a==0)
		break;
	    if(a>i)
	    {
        printf("%5d",a);
	    s++;
	    if(s%10==0)
	    printf("\n");
		}
		
	}
	printf("\n%d¸ö",s);
	return 0;
}
