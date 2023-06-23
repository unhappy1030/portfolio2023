#include<stdio.h>
#include<stdlib.h>
int re[6+1]={0, 5, 10, 4, 11, 7, 0};
int dis[6+1]={0, 100, 30, 100, 40, 50, 60};
int i, j, s, sh, l=140;
int ta[6+1]={0,};
int tr[6+1]={0,};
	
int main(void) {
	for(i=1;i<=6;i++)
	{
		s=0;
		tr[i]=9999;
		for(j=i-1;j>=0;j--)
		{
			s=s+dis[j+1];
			if(s<=l)
			{
				sh=ta[j]+re[i];
				if(sh<=ta[i])
				{
					ta[i]=sh;
					tr[i]=j;
				}	
			}
			
		}
	}
	for(i=0;i<=6;i++)
	{
		printf("%d %d\n", ta[i], tr[i]);
	}
	return 0;
}
