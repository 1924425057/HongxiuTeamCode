#include <stdio.h>
int main()
{
    int n,i;//iΪѭ������ 
    float m,dis1,dis,dis_before;//��m�׸߶��������� ,��n����� 
    scanf("%f%d",&m,&n);//dis1Ϊ�˴η����߶ȣ�disΪ�ܾ��룬disbeforeΪ����ǰһ�εķ����߶� 
    dis1=m;
    dis=m;//�����һ�η����߶Ⱥ;���Ϊs 
    dis_before=0;//���Ϊʲô�������壡������ 
    for(i=1;i<=n;i++)//���ڷ�������������
    {
        dis_before=dis1;//�����ʼ����Ϊ0������ÿ�α�����һ�εķ����߶�
        dis1=dis1/2;//������߶��۰�
        if(i==1)//����ǵ�һ�����䣬��ûʲô��˵�ˣ�ֱ���ǳ�ʼ�߶�
        dis=dis;
        else
        {
//printf("%.2f %.2f %.2f\n",dis1,dis,dis_before);
              if(n==1)
                dis=dis;
              else
                dis=dis+dis_before*2;//��ͼ�Ļ�������һЩ�������ϴεķ�����2
        }
//printf("%.2f %.2f %.2f\n",dis1,dis,dis_before);
    }
    printf("%.2f %.2f",dis1,dis);//���汣����λС��
    return 0;
} 
