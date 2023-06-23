#include <stdio.h>
#define PLATE_MAX 50
int i, j, t, l[2];					// i��j�� void printTower �ۿ��� �����Ͽ� �ٸ� �Լ��������� i��j�� ����� �� �ְ� �Ͽ���. t�� ������ ������ �Է¹޴� �����̴�. l�� ������ �̵��Ǵ� ����� ��ǥ 2���� �Է¹޴´�.(l[0]->l[1]) 
int cp[3]={0,};						//cp�� checkpoint�� ���ڷ� �� ����� ������ ������ ��ǥ�� ����ϴ� �迭�̴�. 
struct {
	int plate[50];
}pole[3];							//���3���� �� ���� ������ ������ ����ü�� �����. 
void printTower() {
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
		return 1;
}
int main() {
	scanf("%d", &t);
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
	while(1)
	{
		scanf("%d%d", &l[0], &l[1]);
		if(move(l[0],l[1])==1) printTower();
		else if(move(l[0],l[1])==0)		//move�Լ����� �ɷ��� 0���� ��ȯ�Ǿ��� �� while���� �����Ų��. 
			break;
	}
	return 0;
}
