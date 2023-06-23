#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv) {
	int i, j, c, r=0;
	char a[100]={1,};
	char b[100]={0,};
	scanf("%d", &c);
	scanf("%s", &a);
	scanf("%s", &b);
	for(i=0;i<c;i++)
	{
		if(b[i]==42)
		{
			r++;
			a[i]=a[i]-1;
			a[i-1]=a[i-1]-1;
			a[i+1]=a[i+1]-1;
		}
	}
	for(i=0;i<c;i++)
	{
		if(a[i-1]>48&&a[i]>48&&a[i+1]>48)
		{
			if(a[i]>=49)
			{
				r++;
				a[i]=a[i]-1;
				a[i-1]=a[i-1]-1;
				a[i+1]=a[i+1]-1;
			}
		}
		printf("%s\n",a);
	}
	printf("%d\n", r+1);
	return 0;
}
