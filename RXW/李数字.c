#include<stdio.h>
int main()
{
    int a,b,c,h,j,min,max;
    float p;
    printf("����3����ͬ������:");
    scanf("%d,%d,%d",&a,&b,&c);
    h=a+b+c;      /*�ܺ�*/ 
    j=a*b*c;      /*�˻�*/ 
    p=(a+b+c)/3;    /*ƽ����*/ 
    printf("h=%d,j=%d,p=%f\n",h,j,p);
    if(a>b&&a>c)
	{
		max=a;
		if(b>c)
		{
			min=c;
			printf("max=%d,min=%d\n",max,min);
		}
		else
		{
			min=b;
	        printf("max=%d,min=%d\n",max,min);
	 	}
	}
    if(b>a&&b>c)
	{
		max=b;
		if(a>c)
		{
			min=c;
			printf("max=%d,min=%d\n",max,min);
		}
	    else
		{
			min=a;
	    	printf("max=%d,min=%d\n",max,min);
   	 	}	
	}
    if(c>a&&c>b)   
	{
		max=c;
		if(a>b)
		{
		    min=b;
		    printf("max=%d,min=%d\n",max,min);
		}
	    else   
		{
			min=a;
	    	printf("max=%d,min=%d\n",max,min);
    	}
	}
    return 0; 
}
