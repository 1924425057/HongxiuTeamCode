#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int number=rand()%100+1;
	int count=0;
	int a=0;
	printf("�������и�1��100������\n"); 
	do{
		printf("�²�������Ƕ��٣�");
		scanf("%d",&a);
		count ++;
		if(a>number)
		{
		printf("��µ������ˣ�\n");
		}
		else if(a<number)
		{
		printf("��µ���С�ˣ�\n");
		}
	}while(a!=number);
	printf("��ˣ�����%d�βŲµ���\n",count);
	return 0;
}
