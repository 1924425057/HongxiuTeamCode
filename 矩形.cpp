#include<stdio.h>
int main()
{
int i,j,m,n;
printf("������εĳ��Ϳ�:\n");
scanf("%ld",&m);
scanf("%ld",&n);
for(i=0;i<m;i++)printf("*");
printf("\n");
for(j=0;j<n;j++)
{
printf("*");
for(i=0;i<(m-2);i++)printf(" ");
printf("*\n");
}
for(i=0;i<m;i++)printf("*");
return 0;
}
