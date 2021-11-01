#include<stdio.h>
int main()
{
	int nian,yue;
	printf("年： 月：\n");
	scanf("%d%d",&nian,&yue);
	if(nian%4==0&&nian%100!=0||nian%400==0)
	{
		printf("闰年");
		switch(yue)
		{
			case 1:printf("月为31天");break;
			case 2:printf("月为29天");break;
			case 3:printf("月为31天");break;
			case 4:printf("月为30天");break;
			case 5:printf("月为31天");break;
			case 6:printf("月为30天");break;
			case 7:printf("月为31天");break;
			case 8:printf("月为31天");break;
			case 9:printf("月为30天");break;
			case 10:printf("月为31天");break;
			case 11:printf("月为30天");break;
			case 12:printf("月为31天");break;
			defauit:printf("错误");break;
		 } 
	}
	else
	{
	    printf("平年");
		switch(yue)
		{
		    case 1:printf("月为31天");break;
			case 2:printf("月为28天");break;
			case 3:printf("月为31天");break;
			case 4:printf("月为30天");break;
			case 5:printf("月为31天");break;
			case 6:printf("月为30天");break;
			case 7:printf("月为31天");break;
			case 8:printf("月为31天");break;
			case 9:printf("月为30天");break;
			case 10:printf("月为31天");break;
			case 11:printf("月为30天");break;
			case 12:printf("月为31天");break;
			default:printf("错误");break;
		}
    } 
	return 0;
 } 
