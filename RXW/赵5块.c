#include<stdio.h>
#include<math.h>
int main()
{
	double pow(double x,double y); 
	double i=1;
	double j,e;
	e=1;
	printf("e�Ľ���ֵ:");
	do{
		j=1/(i*(i+1));
		e=e+j;
		i++;
	}     
	while(fabs(j)<pow(10,-5)); 
	printf("%f",e);
	return 0;
 }

