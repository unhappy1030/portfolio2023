#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	char a[50]={0,};
	int t[10]={6 ,2 ,5 ,5 ,4 ,5 ,6 ,3 ,7 ,6};
	int i, k=0, l, m;
	scanf("%s",&a);
	
	for(i=0;i<50;i++)
	{
		l=a[i];
		if(l!=0)
		k=k+t[l-48];
	}
	printf("%d", k);
	return 0;
}
