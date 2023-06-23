#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, j, t, limit=0, roop=0, count=0, result=0, l=0;
	int map[100][100];
	int a[100]={0,};
	int b;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			scanf("%d", &map[i][j]);
		}
	}
	i=0;
	count=0;
	roop=0;
	limit=0;
	while(1)
	{
		for(j=0;j<t;j++)
		{
			if(map[i][j]!=0)
			{
				if(limit==0)
				{
					limit=map[i][j];
					b=i;
					roop=j;
				}
				else
				{
					if(limit>map[i][j])
					{
						limit=map[i][j];
						b=i;
						roop=j;						
					}
				}
			}
		}
		l++;
		if(i==a[count])
		{
			map[b][roop]=0;
			map[roop][b]=0;
			result+=limit;
			count++;
			a[count]=roop;
			i=0;
			l=0;
			limit=0;
		}
		i=a[l];
		if(count+1 == t)
		{
			break;
		}
	}
	printf("%d", result);
	return 0;
}
