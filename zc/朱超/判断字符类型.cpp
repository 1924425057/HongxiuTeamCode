#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if(a<=32||a==127)
	printf("�����ַ���");
	else if(a>=65&&a<=90)
	printf("��д��ĸ��");
	else if(a>=97&&a<=122)
	printf("Сд��ĸ��");
	else if(a>=48&&a<=57)
	printf("���֣�");
	else 
	printf("������"); 
	return 0;
}
