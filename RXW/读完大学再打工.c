/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=rand();
	int m,n;
	printf("�����볤�Ϳ�");
	scanf("%d,%d",m,n);
	printf("%d",a);
	return 0;
}*/




#include<stdlib.h>
int main()
 {
	int m,n,h[100],c;
	int i,j,k=0,p;
	printf("��?��?������????y��??������3?��??��������o");
	scanf("%d,%d",&m,&n);
	
	//��?��??3?��
	for(k=0; k<m*n; k++) 
	{
		h[k]=rand();
		p=0;//�䨮0?a��?��?��?k����??��D?T??��t??
		while(p<k) {
			if(h[k]==h[p]) 
			{
				h[k]=rand();
				p=0;//��?1???��t?��??D??3?��2���?p1����?
			} else
				p++;//��??��?������??����??
		}
	}
	k=0;//??k1����?��????��?���??��????DD??D?????
	for(i=1; i<=m; i++) {
		for(j=1; j<=n; k++,j++) {
			if(i-1==0)
				if(j-1==0)
					c=1;//������???
				else if(j+1>j)
					c=2;//������???
				else
					c=3;//��?��?��?
			if(i+1>i)
				if(j-1==0)
					c=4;//����????
				else if(j+1>j)
					c=5;//����????
				else
					c=6;//��???��?
			if(j-1==0&&i-1!=0&&i+1<=i)
				c=7;//��?������?
			if(j+1>j&&i-1!=0&&i+1<=i)
				c=8;//��?������?

			switch(c) {
				case 1:
					h[k]=(h[k]+h[k+1]+h[k+n],h[k+n+1])/4;
					break;
				case 2:
					h[k]=(h[k]+h[k-1]+h[k+n]+h[k+n-1])/4;
					break;
				case 3:
					h[k]=(h[k]+h[k-1]+h[k+1]+h[k+n]+h[k+n-1]+h[k+n+1])/6;
					break;
				case 4:
					h[k]=(h[k]+h[k+1]+h[k-n]+h[k-n+1])/4;
					break;
				case 5:
					h[k]=(h[k]+h[k-1]+h[k-n]+h[k-n-1])/4;
					break;
				case 6:
					h[k]=(h[k]+h[k-1]+h[k+1]+h[k-n-1]+h[k-n]+h[k-n+1])/6;
					break;
				case 7:
					h[k]=(h[k]+h[k+1]+h[k-n]+h[k-n+1]+h[k+n]+h[k+n+1])/6;
					break;
				case 8:
					h[k]=(h[k]+h[k-1]+h[k-n]+h[k-n-1]+h[k+n]+h[k+n-1])/6;
					break;
				default :
					h[k]=(h[k]+h[k-1]+h[k+1]+h[k+n]+h[k+n-1]+h[k+n+1]+h[k-n-1]+h[k-n]+h[k-n+1]);
					break;

			}
		}
	}
	p=0;
	for(i=1; i<=m; i++) {
		for(j=1; j<=n; p++,j++) {
			printf("%15d",h[p]);
		}
		putchar('\n');
	}
	return 0;
}

