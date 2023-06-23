#include <stdio.h>
#include <stdlib.h>
int b[10270]={0,};
int c[10270]={0,};
int f=0;
void flowcount(); 

int main(int argc, char *argv[]) {
	int i, j, t, r=0;//r=result
	int a[100][2]={0,};//a[n][0]은 최저보관온도, a[n][1]은 최고보관온도 (n은 미지수) 
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d", &a[i][0], &a[i][1]);//화학물질 최저보관온도, 최고보관온도 입력 
		a[i][0]=a[i][0]+270;
		a[i][1]=a[i][1]+270;
	}
	for(i=0;i<t;i++)
	{
		for(j=a[i][0];j<=a[i][1];j++)
		{
			
			b[j]++;
			
		}
	}
//	작아지는 값 확인
//	각각의 데이터 확인	
//	printf("\n%d", r);
	return 0;
}
void flowcount()
{
	for(i=0;i<10270;i++)
	{
		if(b[i]==0)
		{
			continue;
		}
		if(b[i-2]<=b[i-1])
		{
			f=1;
		}
		else
		{
			f=0;
		}
		if(f==1)
		{
			if(b[i]<b[i+1])
			{
				c[i-1]=1;
			}
		}
		
	}
}

