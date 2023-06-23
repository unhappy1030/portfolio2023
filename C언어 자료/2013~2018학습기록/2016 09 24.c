#include <stdio.h>
#include <stdlib.h>
int f(int);
int i, j, t, m=0, l=0, n=0;
int a[100][2]={0,};//기본 태이블 
int b[100]={0,};//비교 태이블 
int c[100][100]={0,};//삭제하는 부분을 저장 하는 태이블 
int d[100]={0,}; 
int main(int argc, char *argv[]) {
	scanf("%d", &t);//입력 받을 수 입력 
	for(i=0;i<t;i++)
	{
		scanf("%d%d", &a[i][0], &a[i][1]);//a 태블에 값 입력 
	}
	while(1)// while문 시작 
	{
		printf("\n1");
		n=0;
		l=0;
		for(i=0;i<t;i++)  
		{
			m=0;
			f(i);//f함수 호출
			if(b[i]>l)//b태이브의 최대값 구하기 
			{
				l=b[i];//b태이블의 최대값을 l에 저장 
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
		for(i=0;i<t;i++)//값 초기화 
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
		if(i==x)//만약 f함수에서 받아들이는 수와 i의 값이 같을 떄 다음으로 넘어간다. 
		{
			continue;
		}
		if(d[i]==1)
		{
			continue;
		}
		if(a[x][0]<=a[i][0] || a[x][1]>=a[i][1])//겹치는 수 검색 
		{
			c[x][i]=1;
			m++;//값 증가 
		}
	}
	b[x]=m;
	return 0;	
}
