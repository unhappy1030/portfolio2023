#include <stdio.h>
#include <stdlib.h>
int a[101][101], b[101], c[101], n, m;
void Go(int l1, int v)
{
	int l2;
	b[l1]+=v;
	for(l2=1;l2<=n;l2++)
	{
		if(a[l1][l2])
		{
			Go(l2,v*a[l1][l2]);
		}
	}
}
int main() {
	int l1,t1,t2;
	scanf("%d%d", &t1, &t2);
	for(l1=0;l1<m;l1++){
		scanf("%d%d", &t1, &t2);
		c[t1]=1;
		scanf("%d", &a[t1][t2]);
	}
	Go(n,1);
	for(l1=1;l1<=n;l1++)
	{
		if(c[l1]==0) printf("%d %d\n", l1, b[l1]);
	}
	system("pause");
	return 0;
}
