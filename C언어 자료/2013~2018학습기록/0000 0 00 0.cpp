#include<stdio.h>
#include<stdlib.h>
void find (int n);
int yak[100]={0,};
int cnt=0;
int main() {
	int m, n;
	char c;
	int dak[101]={0,};
	while(m!=0||n!=0)
	{
		scanf("%d%c%d", &m, &c, &n);
		if(m==2)
		{
			for(int i=0;i<101;i=i+n)
			{
				if(dak[i]==0)
				{
					dak[i]=1;
				}
				else{
					dak[i]=0;
				}
			}
			
		}
		else if(m==1)
		{
			find(n);
			for(int i=0;i<cnt;i++)
			{
				if(dak[yak[i]]==0)
				{
					dak[yak[i]]=1;
				}
				else
				{
					dak[yak[i]]=0;
				}
			}
			for(int i=0;i<101;i++)
			{
				printf("%d ", dak[i]);
				if(i%20==0)
				{
					printf("\n");
				}
			}
		}
	}		
}
void find(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			yak[cnt]=i;
			cnt++;
		}
	}
}
