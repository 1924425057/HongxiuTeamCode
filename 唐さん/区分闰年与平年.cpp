#include<stdio.h>
int main()
{
	int nian,yue;
	printf("�꣺ �£�\n");
	scanf("%d%d",&nian,&yue);
	if(nian%4==0&&nian%100!=0||nian%400==0)
	{
		printf("����");
		switch(yue)
		{
			case 1:printf("��Ϊ31��");break;
			case 2:printf("��Ϊ29��");break;
			case 3:printf("��Ϊ31��");break;
			case 4:printf("��Ϊ30��");break;
			case 5:printf("��Ϊ31��");break;
			case 6:printf("��Ϊ30��");break;
			case 7:printf("��Ϊ31��");break;
			case 8:printf("��Ϊ31��");break;
			case 9:printf("��Ϊ30��");break;
			case 10:printf("��Ϊ31��");break;
			case 11:printf("��Ϊ30��");break;
			case 12:printf("��Ϊ31��");break;
			defauit:printf("����");break;
		 } 
	}
	else
	{
	    printf("ƽ��");
		switch(yue)
		{
		    case 1:printf("��Ϊ31��");break;
			case 2:printf("��Ϊ28��");break;
			case 3:printf("��Ϊ31��");break;
			case 4:printf("��Ϊ30��");break;
			case 5:printf("��Ϊ31��");break;
			case 6:printf("��Ϊ30��");break;
			case 7:printf("��Ϊ31��");break;
			case 8:printf("��Ϊ31��");break;
			case 9:printf("��Ϊ30��");break;
			case 10:printf("��Ϊ31��");break;
			case 11:printf("��Ϊ30��");break;
			case 12:printf("��Ϊ31��");break;
			default:printf("����");break;
		}
    } 
	return 0;
 } 
