#include<stdio.h>

int a=123456,p=123456,account,password;
int num;
float Money=10000.0;
float c,q;


int cha_xun() {
	printf("������Ϊ��%.2fԪ.\n",Money);
	if(Money<200000.0)
		printf("����ǰ������20w���⽫��Ӱ�����¸���һ���Ը���Ĺ����ƻ�Ŷo'_'o"
		       "���껹��Ŭ���� L'_'L ���ͣ�����\n");
	return 0;
}

int cun() {
	printf("��������Ҫ����Ľ�");
	scanf("%f",&c);

	if(c<0)
		printf("����Ӵ�������븺������Ѳ���Ҫ�Ҹ���Ǯѽ! *_*\n");
	else {
		if(c>5000)
			printf("���ݹ�̨�Ǳߵ���Ϣ������нֻ��3000������������ô��Ǯ���洢ѽ >_<");
		else {
			Money+=c;

			printf("���ѳɹ�����%.2fԪ�ֽ�^_^\n",c);
			printf("��ǰ���Ϊ%.2fԪ��\n",Money);

		}
	}


	return 0;
}

int qu() {
	printf("��������Ҫȡ���Ľ�");
	scanf("%f",&q);

	if(q>Money)
		printf("������˼Ӵ������˻��ﻹû����ô��Ǯ\n");
	else {
		Money-=q;

		printf("�����һ�³�Ʊ�����Ƿ���ȷ����Ʊ����Ų�����:)\n");
		printf("����˻���ǰ���Ϊ��%.2fԪ.\n",Money);
	}

	if(Money<10000.0) {
		printf("����˻���ǰ�����ͣ�Ҫ��ʱ��ֵӴ��");
		printf("������������������컹δ��ֵ����5000Ԫ�����н�������˻����ж��ᴦ��:)\n"
		       "����������⣬���ǻ�����Զ�Ĺ����ƻ�����ģ�~#_#~\n");
	}


	return 0;
}

int tuichu() {
	char k;
	printf("ʲô�������˳�������˻�����ô��Ǯ������˳���\n\n\n");
	printf("����������˳���\n");
	printf("(Y...�ǵ�/N...�����룬���ٿ��ǳ��Ǯ��ȥ)");
	scanf("%s",&k);
	if(k=='Y') {
		printf("�G�����ã��ҾͲ������˳��������ԡ�- ��");
		printf("�б������ٰ�Y���ԣ������ò������˳���- ��");
		scanf("%s",&k);
		if(k=='Y') {
			printf("�G�����:)");


		} else {
			printf("�������Ȼ�����ҵģ�С������");


		}
	} else {
		printf("�Ŷԣ��ٳ��Ǯ��ȥ����һ�����˳����ء�- ��\n");

		printf("ƭ��ġ�- ���㻹������^ = ^\n");


	}
	return 0;
}
int main() {
there:
	;
	printf("����������˻���");
	scanf("%d",&account);
	printf("������������룺");//ֻҪ������ȷ��ʹ���ں�߼��ϼ�����ĸҲ�ܽ�ȥ 
	scanf("%d",&password);
	if(account==a&&password==p) {
		printf("1,��ѯ�˻����\n"
		       "2,���\n"
		       "3,ȡ��\n"
		       "0,�˳�\n");

		printf("��ѡ����Ҫ�����ҵ�������Ӧ��ţ���");
		scanf("%d",&num);

		while(num>0) {
			switch(num) {
				case	1 :
					cha_xun();
					break;
				case	2 :
					cun();
					break;
				case	3 :
					qu();
					break;
				default   :

					break;
			}
			printf("��ѡ����Ҫ�����ҵ�������Ӧ��ţ���");
			scanf("%d",&num);
		}
	} else {
		printf("��ѽ>_<�˻����������\n");
		
		goto there;
	}
	tuichu();


	return(0);
}


