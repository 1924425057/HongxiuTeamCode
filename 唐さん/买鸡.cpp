#include<stdio.h>
int main()
{
	int a,b,c;
	for(a=0;a<=20;a++)
	{
		for(b=0;b<=33;b++)
		{
			for(c=0;c<=100;c++)
            {
               if((a+b+c==100)&&(a*5+b*3+c*1/3.0==100))
			   printf("¹«¼¦£º%d Ä¸¼¦£º%d Ð¡¼¦£º%d\n",a,b,c);
			}
		}
	}
	return 0;
}
