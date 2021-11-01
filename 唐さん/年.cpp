#include<stdio.h>
int main()
{
	int nian,yue;
	printf("年：月：");
	scanf("%d%d",&nian,&yue);
if(nian%4==0&&nian%100!=0||nian%400==0)
{
	printf("%d是闰年\n",nian);
	switch(yue)
	{case 1:printf("一月31天");break;
	case 2:printf("二月29天");break;
	case 3:printf("三月31天");break;
	case 4:printf("四月31天");break;
	case 5:printf("五月31天");break;
	case 6:printf("六月31天");break;
	case 7:printf("七月31天");break;
	case 8:printf("八月31天");break;
	case 9:printf("九月31天");break;
	case 10:printf("十月31天");break;
	case 11:printf("十一月31天");break;
	case 12:printf("十二月31天");break;
	default:printf("错误");break;
	}

}
else
{
	printf("%d是平年",nian);
    switch(yue)
	{case 1:printf("一月31天");break;
	case 2:printf("二月28天");break;
	case 3:printf("三月31天");break;
	case 4:printf("四月31天");break;
	case 5:printf("五月31天");break;
	case 6:printf("六月31天");break;
	case 7:printf("七月31天");break;
	case 8:printf("八月31天");break;
	case 9:printf("九月31天");break;
	case 10:printf("十月31天");break;
	case 11:printf("十一月31天");break;
	case 12:printf("十二月31天");break;
	default:printf("错误");break;}
}
	return 0;
 } 
