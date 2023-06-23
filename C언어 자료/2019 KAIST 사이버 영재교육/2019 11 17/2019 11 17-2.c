#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct table{
	char cnt[127];
};
struct table change(struct table *input)
{
	int i=0, j=0;
	struct table r;
	while(input->cnt[i] != "\0")
	{
		if((j==4) || (j==7) || (j==10))
		{
			r.cnt[j]=".";
			j++;
			continue;
		}
		if(j==14)
		{
			r.cnt[j]=":";
			j++;
			continue;
		}
		r.cnt[j]=input->cnt[i];
		i++;
		j++;
	}
	return r;
}
int main() {
	int i, n;
	struct table *arr;
	struct table p;
	scanf("%d\n", &n);
	arr = (int *)malloc(sizeof(int) * n);
	for(i=0;i<n;i++)
	{
		gets(arr[i].cnt);
		p=change(arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n", p);
	}
	return 0;
}
