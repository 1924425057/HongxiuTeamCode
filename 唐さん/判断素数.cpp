#include<stdio.h>
#include<math.h>
int main() {
	int m,i,n;
	printf("������һ�����ж����Ƿ�Ϊ������");
	scanf("%d",&m);
	n=sqrt(m);
	for(i=2; i<=n; i++)
		if(m%i==0)break;
	if(i>n)
		printf("%d������",m);
	else
		printf("%d��������",m);
	return 0;
}
