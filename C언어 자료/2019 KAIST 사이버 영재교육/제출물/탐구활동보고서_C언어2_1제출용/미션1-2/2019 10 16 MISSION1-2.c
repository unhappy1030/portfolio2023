#include <stdio.h>
#define PLATE_MAX 50
int i, j, t, l[2];					// i와j를 void printTower 밖에서 선언하여 다른 함수내에서도 i와j를 사용할 수 있게 하였다. t는 원판의 갯수를 입력받는 변수이다. l은 원판이 이동되는 기둥의 좌표 2개를 입력받는다.(l[0]->l[1]) 
int cp[3]={0,};						//cp는 checkpoint의 약자로 각 기둥의 마지막 원판의 좌표를 기억하는 배열이다. 
struct {
	int plate[50];
}pole[3];							//기둥3개와 그 안의 원판을 선언할 구조체를 만든다. 
void printTower() {
	for(i=0;i<3;i++)
	{
		printf("%d : ", i);
		if(cp[i]==0) printf("x ");	//cp의 값이 0일 경우 각 기둥에는 원판이 존재하지 않는 것이다. 
		else
		{
			for(j=0;j<cp[i];j++)	//cp의 값만큼 출력하여 쓸모없는 값이 출력되지 않게 for문의 반복회수를 정한다. 
			{
				printf("%d ", pole[i].plate[j]);
			}
		}
		printf("\n");
	}
}
int move(int sp, int rp){
	int a;							//a는 값을 일시적으로 저장하여 값을 이동시키는 역할을 한다. 
	if((cp[sp]==0) || (sp > 2) || (rp > 2)) return 0; //입력조건에 맞지 않는 값을 걸러낸다. 
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
		else if(move(l[0],l[1])==0)		//move함수에서 걸러져 0값이 반환되었을 때 while문을 종료시킨다. 
			break;
	}
	return 0;
}
