#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int i, j, t;
	int strike=0, ball=0;
	int b[3]={0,};
	int a[3]={0,};
	srand(time(NULL));
	for(i=0;i<3;i++)
	{
		a[i]=rand() % 10;
		if(a[i]==a[i-1]||a[i]==a[i-2])
		{
			i--;
			continue;
		}
		printf("%d ", a[i]);
	} 
	while(1)
	{
		strike=0;
		ball=0;
		printf("각각 다른 세자리수를 입력하시오\n");
		scanf("%d", &t);
		if(t/1000>=1)
		{
			continue;
		}
		b[0]=t/100; 
		t=t-(b[0]*100);
		b[1]=t/10;
		t=t-(b[1]*10);
		b[2]=t/1;
		if(b[0]==b[1]||b[0]==b[2]||b[1]==b[2])
		{
			continue;
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(a[i]==b[j]&&i==j)
				{
					strike++;
				}
				else if(a[i]==b[j])
				{
					ball++;
				}
			}
		}
		if(strike==0&&ball==0)
		{
			printf("OUT");
		}
		else
		{
			printf("%dstrike, %dball", strike, ball);
		}
		if(strike==3)
		{
			break;
		}
	}
	return 0;
}
