#include <stdio.h>
#define PLATE_MAX 50
int i, j, t, l, m[2], lo[2], k;					// i��j�� void printTower �ۿ��� �����Ͽ� �ٸ� �Լ��������� i��j�� ����� �� �ְ� �Ͽ���. t�� ������ ������ �Է¹޴� �����̴�. l�� ������ �̵��Ǵ� ����� ��ǥ 2���� �Է¹޴´�.(l[0]->l[1]) 
int cp[3]={0,};						//cp�� checkpoint�� ���ڷ� �� ����� ������ ������ ��ǥ�� ����ϴ� �迭�̴�. 
int count = 0;
struct {
	int plate[50];
}pole[3];							//���3���� �� ���� ������ ������ ����ü�� �����. 
void printTower() {
	if(m[1]==1){
		for(i=0;i<3;i++)
		{
			printf("%d : ", i);
			if(cp[i]==0) printf("x ");	//cp�� ���� 0�� ��� �� ��տ��� ������ �������� �ʴ� ���̴�. 
			else
			{
				for(j=0;j<cp[i];j++)	//cp�� ����ŭ ����Ͽ� ������� ���� ��µ��� �ʰ� for���� �ݺ�ȸ���� ���Ѵ�. 
				{
					printf("%d ", pole[i].plate[j]);
				}
			}
			printf("\n");
		}
	}
	else if(m[1]==2)// �Է¹��� ���� ���� ���° ������� ��Ÿ�� �� for���� ���ؼ� �ϳ���ž�� �׸��� �׸���. 
	{
		for(i=0;i<3;i++)
		{
			printf("%d��° ���\n", i);
			for(j=t-1;j>=0;j--)
			{
				if(pole[i].plate[j]==0)
				{
					printf("x \n");
					continue;
				}
				for(k=0;k<pole[i].plate[j];k++)
				{
					printf("%d ", pole[i].plate[j]);
				}
				printf("\n");
			}
		}
	}
}
int move(int sp, int rp){
	int a;							//a�� ���� �Ͻ������� �����Ͽ� ���� �̵���Ű�� ������ �Ѵ�. 
	if((cp[sp]==0) || (sp > 2) || (rp > 2)) return 0; //�Է����ǿ� ���� �ʴ� ���� �ɷ�����. 
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
		count++;
		return 1;
}
int solve(int n, int from, int to) {
	int k;
	if(((from == 0)&&(to == 1)) || ((from == 1)&&(to == 0)))
	{
		k=2;
	}
	if(((from == 0)&&(to == 2)) || ((from == 2)&&(to == 0)))
	{
		k=1;
	}
	if(((from == 1)&&(to == 2)) || ((from == 2)&&(to == 1)))
	{
		k=0;
	}
	if(n==1)
	{
		move(from, to);
		printTower();
		printf("(%d->%d) : ����%d\n", from, to, pole[to].plate[cp[to]-1]);
		return 1;
	}
	else
	{
		return solve(n-1, from, k) + solve(1, from, to) + solve(n-1, k, to);
	}
}
int checkFinish() {
	int k;
	if(l==1)
	{
		k=2;
	}
	else if(l==2)
	{
		k=1;
	}
	if((cp[0]==0)&&(cp[k]==0))
	{
		return 1;
	}
	else
		return 0;
}

int main() {
	printf(" ������ ������ �Է��ϼ��� : ");
	scanf("%d", &t);
	printf("\n �ű� ��� ��ȣ�� �Է��ϼ��� : ");
	scanf("%d", &l);
	printf("\n ���� ������ 1��, �ڵ������� 2���� �Է��ϼ��� : ");
	scanf("%d", &m[0]);												//������ ���� �Է� 
	printf("\n �ܼ� ����� 1�� �׸� ����� 2���� �Է��ϼ��� : "); 
	scanf("%d", &m[1]);												//��¹�� ���� �Է� 
	for(i=0;i<3;i++)
	{
		for(j=0;j<PLATE_MAX;j++)
		{
			if((j<t) && (i==0))
			{
				pole[i].plate[j]=t-j;
				cp[i]=j+1;
			}
			else
				pole[i].plate[j]=0;
		}
	}
	printTower();
	printf("(����)\n");
	if(m[0]==1)
	{
		while(1)
		{
			scanf("%d%d", &lo[0], &lo[1]);
			if(move(lo[0],lo[1])==1)
			{
				printTower();
				printf("(%d->%d) : ����%d\n", lo[0], lo[1], pole[lo[1]].plate[cp[lo[1]]-1]);
			}
			else if(move(lo[0],lo[1])==0)		//move�Լ����� �ɷ��� 0���� ��ȯ�Ǿ��� �� while���� �����Ų��. 
				break;
			if(checkFinish()) break;
		}
	}
	else if(m[0]==2)
	{
		solve(t, 0, l);
	}
	printf("\n�� %d�� �̵��Ͽ����ϴ�.", count);
	return 0;
}
