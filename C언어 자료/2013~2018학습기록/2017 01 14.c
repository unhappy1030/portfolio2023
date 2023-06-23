#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j, w, pr, k, m;
	long long r=0;
	long long a[100000][2]={0,};
	int t[100000];
	scanf("%d%d", &w, &pr);
	for(i=0;i<w;i++)
	{
		scanf("%d%d", &a[i][0], &a[i][1]);
	}
	for(i=0;i<w;i++)
	{
		if(t[i]==1)
		{
			continue;
		}
		for(j=0;j<w;j++)
		{
			if(i==j)
			{
				continue;
			}
			if(t[j]==1)
			{
				continue;
			}
			m=j-i;
			if((a[i][0]*a[j][1])+(a[j][1]*(pr*m))<(a[j][0]*a[j][1]))
			{
				r=r+(a[i][0]*a[j][1])+(a[j][1]*(pr*m));
				t[j]=1;
			}
		}
		r=r+(a[i][0]*a[i][1]);
		t[i]=1;
	}
	printf("%lld", r);
	return 0;
}
