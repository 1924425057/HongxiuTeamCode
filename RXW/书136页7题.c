#include<stdio.h>
int main()
{
	float p,d=0;
	int a; 
	printf("�������ѽ�");
	scanf("%f",&p); 
	a=p/100;
	switch(a)
	{
		case 1:printf("ʵ�����ѽ�%f",p);break;
		case 2:
		case 3:printf("ʵ�����ѽ�%f",p*0.95);break;
		case 4:
		case 5:printf("ʵ�����ѽ�%f",p*0.9);break;
		case 6:
		case 7:
		case 8:
		case 9:printf("ʵ�����ѽ�%f",p*0.85);break;
		case 10:
		default:printf("ʵ�����ѽ�%f",p*0.8);break;
	}
	
}
