#include <stdio.h>
#define PLATE_MAX 50
int m, n, t;						//m와n은 i와j를 대체하기위해서 선언한 변수이다. t는 원판의 갯수를 입력받는 변수이다. 
int cp[3]={0,};						//cp는 checkpoint의 약자로 각 기둥의 마지막 원판의 좌표를 기억하는 배열이다. 
struct {
	int plate[50];
}pole[3];							//기둥3개와 그 안의 원판을 선언할 구조체를 만든다. 
void printTower() {
	int i, j;						//i,j는 소스코드에서 처럼 선언하였지만 이 선언을 함수 밖으로 뺀다면 i,j를 다른 함수 안에서도 for문을 사용할 때 변수를 사용할 수 있다. 
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
int main() {
	scanf("%d", &t);
	for(m=0;m<3;m++)				//첫번째 기둥에는 원판값을 넣고 다른 기둥은 초기화시킨다. 
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
