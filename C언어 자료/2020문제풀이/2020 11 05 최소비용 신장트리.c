#include <stdio.h>
#include <stdlib.h>

int i, j, t, k, cost=0, max=0;
int a[100][100]={0,};
int ch[100]={0,};
int lo[2]={0,};
int lowestcost(void);
int check(void);

int main() {
	//입력층
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	//최댓값 찾기
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			if(a[i][j] > max)
			{
				max = a[i][j];
				lo[0] = i;
				lo[1] = j;
			}
		}
	}
	//첫번째 최솟값 찾기
	k=max;
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			if(a[i][j] != 0)
			{
				if(a[i][j] < k)
				{
					k=a[i][j];
					lo[0]=i;
					lo[1]=j;
				}
			}
			else
			{
				continue;
			}
		}
	}
	a[lo[0]][lo[1]] = 0;
	a[lo[0]][lo[1]] = 0;
	ch[lo[0]] = 1;
	ch[lo[1]] = 1;
	cost += k;
	//비용 더하기
	while(check())
	{
		lowestcost(); 
	}
	//출력
	printf("%d", cost);
	return 0;
}

int lowestcost(void) // 최솟값 함수
{
	int k=max;
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			if(a[i][j] != 0)
			{
				if((ch[i] == 1 && ch[j] == 0) || (ch[i] == 0 && ch[j] == 1))
				{
					if(a[i][j] < k)
					{
						k=a[i][j];
						lo[0]=i;
						lo[1]=j;
					}
				}
			}
			else
			{
				continue;
			}
		}
	}
	a[lo[0]][lo[1]] = 0;
	a[lo[0]][lo[1]] = 0;
	ch[lo[0]] = 1;
	ch[lo[1]] = 1;
	cost += k;
	return 0;
}

int check(void) //ch배열 확인용
{
	for(i=0;i<t;i++)
	{
		if(ch[i]==0)
		{
			return 1;
		}
	}
	return 0;
}
