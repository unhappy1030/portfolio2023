#include <stdio.h>
#include <stdlib.h>
int f(int);
int i, j, t, m=0, l=0, n=0;
int a[100][2]={0,};//�⺻ ���̺� 
int b[100]={0,};//�� ���̺� 
int c[100][100]={0,};//�����ϴ� �κ��� ���� �ϴ� ���̺� 
int d[100]={0,}; 
int main(int argc, char *argv[]) {
	scanf("%d", &t);//�Է� ���� �� �Է� 
	for(i=0;i<t;i++)
	{
		scanf("%d%d", &a[i][0], &a[i][1]);//a �º� �� �Է� 
	}
	while(1)// while�� ���� 
	{
		printf("\n1");
		n=0;
		l=0;
		for(i=0;i<t;i++)  
		{
			m=0;
			f(i);//f�Լ� ȣ��
			if(b[i]>l)//b���̺��� �ִ밪 ���ϱ� 
			{
				l=b[i];//b���̺��� �ִ밪�� l�� ���� 
			}
		}
		printf("\n%d", l);
		for(i=0;i<t;i++)
		{
			if(c[l][i]==1)
			{
				d[i]=1;
			}
			if(d[i]==1)
			{
				n++;
			}
		}
		for(i=0;i<t;i++)//�� �ʱ�ȭ 
		{
			b[i]=0;
			for(j=0;j<t;j++)
			{
				c[i][0]=0;
				c[i][1]=0;
			}
		}
		printf("\n%d", n);
		if(n==t)
		{
			break;
		}
	}
	return 0;
}
int f(int x)
{
	for(i=0;i<t;i++)
	{
		if(i==x)//���� f�Լ����� �޾Ƶ��̴� ���� i�� ���� ���� �� �������� �Ѿ��. 
		{
			continue;
		}
		if(d[i]==1)
		{
			continue;
		}
		if(a[x][0]<=a[i][0] || a[x][1]>=a[i][1])//��ġ�� �� �˻� 
		{
			c[x][i]=1;
			m++;//�� ���� 
		}
	}
	b[x]=m;
	return 0;	
}
