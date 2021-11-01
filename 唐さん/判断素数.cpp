#include<stdio.h>
#include<math.h>
int main() {
	int m,i,n;
	printf("请输入一个数判断其是否为素数：");
	scanf("%d",&m);
	n=sqrt(m);
	for(i=2; i<=n; i++)
		if(m%i==0)break;
	if(i>n)
		printf("%d是素数",m);
	else
		printf("%d不是素数",m);
	return 0;
}
