#include <stdio.h>
#define PLATE_MAX 50
int m, n, t;						//m��n�� i��j�� ��ü�ϱ����ؼ� ������ �����̴�. t�� ������ ������ �Է¹޴� �����̴�. 
int cp[3]={0,};						//cp�� checkpoint�� ���ڷ� �� ����� ������ ������ ��ǥ�� ����ϴ� �迭�̴�. 
struct {
	int plate[50];
}pole[3];							//���3���� �� ���� ������ ������ ����ü�� �����. 
void printTower() {
	int i, j;						//i,j�� �ҽ��ڵ忡�� ó�� �����Ͽ����� �� ������ �Լ� ������ ���ٸ� i,j�� �ٸ� �Լ� �ȿ����� for���� ����� �� ������ ����� �� �ִ�. 
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
int main() {
	scanf("%d", &t);
	for(m=0;m<3;m++)				//ù��° ��տ��� ���ǰ��� �ְ� �ٸ� ����� �ʱ�ȭ��Ų��. 
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
	return 0;
}
