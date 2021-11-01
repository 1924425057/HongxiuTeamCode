#include<stdio.h>
int main()
{
	int n,chengji,i;
	float sum,a;
	printf("请输入学生人数："); 
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("请输入学生成绩：");
		scanf("%d",&chengji);
		if(chengji<0||chengji>100)
		{
		printf("成绩错误,重新输入：\n");
		i--;
		continue;
		}
		sum=sum+chengji;
	}
	a=sum/n;
	printf("%f",a);
	return 0;
}
