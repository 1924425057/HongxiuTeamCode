#include<stdio.h>
int main()
{
	int p;
	float t; 
	printf("���ѽ����:");
	scanf("%d",&p); 
	t=p;
	p=p/100 ;
	switch(p)
	{
		case 0:;
		case 1: printf("����������%f",t);break;
		case 2:
		case 3: printf("����������%f",t*0.95);break;
		case 4:
		case 5: printf("����������%f",t*0.9);break;
		case 6:
		case 7:
		case 8: 
     	case 9: printf("����������%f",t*0.85);break; 
		case 10:
		default: printf("����������%f",t*0.8);break;
	}
	 
	return 0;
 }

