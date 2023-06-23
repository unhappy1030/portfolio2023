#include <stdio.h>
#define PLATE_MAX 50
int m, n, t, l[2];
int cp[3]={0,};
struct {
	int plate[50];
}pole[3];

void printTower() {
	int i, j;
	for(i=0;i<3;i++)
	{
		printf("%d : ", i);
		if(cp[i]==0) printf("x ");
		else
		{
			for(j=0;j<cp[i];j++)
			{
				printf("%d ", pole[i].plate[j]);
			}
		}
		printf("\n");
	}
}
int move(int sp, int rp){
	int a;
	if((cp[sp]==0) || (sp > 2) || (rp > 2)) return 0;
	else
		a=pole[sp].plate[cp[sp]-1];
		pole[sp].plate[cp[sp]-1]=0;
		cp[sp]--;
		if(cp[rp]==0)
		{
			pole[rp].plate[cp[rp]]=a;
			cp[rp]++;
		}
		else
		{
			cp[rp]++;
			pole[rp].plate[cp[rp]-1]=a;
		}
		return 1;
}

int main() {
	scanf("%d", &t);
	for(m=0;m<3;m++)
	{
		for(n=0;n<PLATE_MAX;n++)
		{
			if((n<t) && (m==0))
			{
				pole[m].plate[n]=t-n;
				cp[m]=n+1;
			}
			else
				pole[m].plate[n]=0;
		}
	}
	printTower();
	while(1)
	{
		scanf("%d%d", &l[0], &l[1]);
		if(move(l[0],l[1])==1) printTower();
		else if(move(l[0],l[1])==0)
			break;
	}
	return 0;
}
