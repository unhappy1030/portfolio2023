#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, k=0, x=0;
	int a[8]={0,};
	int b[4]={0,};
//	FILE* fin=fopen("input.txt","r");
//	FILE* fout=fopen("output.txt","w");
	for(i=0;i<8;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<8;i++)
	{
		if(i==1)
		{
			b[x]=a[i];
			b[x+1]=a[i];
		}
		if(i==2||i==3)
		{
			if(i==2)
			{
				b[x+1]=b[x+1]-a[i];
			}
			if(i==3)
			{
				b[x+1]=b[x+1]+a[i];
			}
			b[x+2]=b[x+1];
		}
		if(i==4||i==5)
		{
			if(i==4)
			{
				b[x+2]=b[x+2]-a[i];
			}
			if(i==5)
			{
				b[x+2]=b[x+2]+a[i];
			}
			b[x+3]=b[x+2];
		}
		if(i==6)
		{
			b[x+3]=b[x+3]-a[i];
		}
	}
	for(i=0;i<4;i++)
	{
		if(k<=b[i])
		{
			k=b[i];
		}
	}
	printf("%d", k);
	//fclose(fin);
	//fclose(fout);
	return 0;
}
