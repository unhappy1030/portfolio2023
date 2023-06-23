#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, t=0, k;
	char a[15]={0,};
	scanf("%s", &a);
	for(i=0;i<15;i++)
	{
		k=a[i]-64;
		if(k>0&&k<4)
		{
			t=t+3;
		}
		if(k>3&&k<7)
		{
			t=t+4;
		}
		if(k>6&&k<10)
		{
			t=t+5;
		}
		if(k>9&&k<13)
		{
			t=t+6;
		}
		if(k>12&&k<16)
		{
			t=t+7;
		}
		if(k>15&&k<20)
		{
			t=t+8;
		}
		if(k>19&&k<23)
		{
			t=t+9;
		}
		if(k>22&&k<27)
		{
			t=t+10;
		}
	}
	printf("%d", t);
	return 0;
}
