#include<stdio.h>
int main(void)
{
	double M,N,i=1.0;
	double x,s,a;
	printf("������������߶Ⱥ͵ڼ������\n");
	scanf("%lf%lf",&M,&N);
	s=M;
	for(i;i<=N;i++)
	{
		a=M/2.0;//ÿ�η����߶� 
		s=s+a*2;//���μ���Ծ���� 
		M=a;
	}
	printf("%f",a);//��N�θ߶� 
	printf(" ");
	printf("%f",s-a*2);//�ܾ��� 
	return 0;
}
