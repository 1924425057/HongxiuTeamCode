#include<stdio.h>
int main()
{
	int nian,yue;
	printf("�꣺�£�");
	scanf("%d%d",&nian,&yue);
if(nian%4==0&&nian%100!=0||nian%400==0)
{
	printf("%d������\n",nian);
	switch(yue)
	{case 1:printf("һ��31��");break;
	case 2:printf("����29��");break;
	case 3:printf("����31��");break;
	case 4:printf("����31��");break;
	case 5:printf("����31��");break;
	case 6:printf("����31��");break;
	case 7:printf("����31��");break;
	case 8:printf("����31��");break;
	case 9:printf("����31��");break;
	case 10:printf("ʮ��31��");break;
	case 11:printf("ʮһ��31��");break;
	case 12:printf("ʮ����31��");break;
	default:printf("����");break;
	}

}
else
{
	printf("%d��ƽ��",nian);
    switch(yue)
	{case 1:printf("һ��31��");break;
	case 2:printf("����28��");break;
	case 3:printf("����31��");break;
	case 4:printf("����31��");break;
	case 5:printf("����31��");break;
	case 6:printf("����31��");break;
	case 7:printf("����31��");break;
	case 8:printf("����31��");break;
	case 9:printf("����31��");break;
	case 10:printf("ʮ��31��");break;
	case 11:printf("ʮһ��31��");break;
	case 12:printf("ʮ����31��");break;
	default:printf("����");break;}
}
	return 0;
 } 
