#include <stdio.h>
#define PLATE_MAX 50
int i, j, t;
struct{
	int space[50];
}pole[3];
int check(int pn){ //polenumber 기둥의 번호 , 기둥안에 원판이 있는지 없는 지 확인하는 함수
	for(i=0;i<t;i++)
	{
		if(pole[pn].space[i]!=0)
		{
			return 1;
			break;
		}
	}
	return 0;
} 
void printTower(){
	scanf("%d", &t);
	for(i=0;i<3;i++)
	{
		printf("%d : ", i);
		if(i!=0)
		{
			printf("x ");
		}
		else
			for(j=0;j<PLATE_MAX;j++)
			{
				if(j>=t)
				{
					break;
				}
				else
				{
					pole[i].space[j]=t-j;
					printf("%d ", pole[i].space[j]);
				}	
			}
		printf("\n");
	}
}
int move(int spoint, int rpoint){	//sendpoint 나가는 점, receivepoint 받는점 
	int a;
	if((spoint == rpoint) || (spoint > 2) || (rpoint > 2))
	{
		return 0;
	}
	else
		for(i=t-1;i>=0;i--)
		{
			if(pole[spoint].space[i]!=0)
			{
				a=pole[spoint].space[i];
				pole[spoint].space[i]=0;
				break;
			}
			else
				a=0;
				return 0;
				break;
		}
		for(i=t-1;i>=0;i--)
		{
			if(i == 0)
			{
				pole[rpoint].space[i]=a;
				return 1;
			}
			else
				pole[rpoint].space[i+1]=a;
				return 1;
		}
}
int main() {
	int location[2];
	for(i=0;i<3;i++)
	{
		for(j=0;j<PLATE_MAX;j++)//효율성을 높이기 위해서 50개 전체가 아니라 입력받은 수 만큼만 초기화할 수 도 있음 
		{
			pole[i].space[j]=0;
		}
	}
	printTower();
	while(1)
	{
		scanf("%d%d", &location[0], &location[1]);
		if(move(location[0], location[1]) == 1)
		{
			for(i=0;i<4;i++)
			{
				printf("%d : ", i);
				if(check(i) == 0)
				{
					printf("x ");
				}
				else
				{
					for(j=0;j<PLATE_MAX;j++) 
					{
						if(pole[i].space[j]==0)
						{
							break;
						}
						else
						{
							printf("%d ", pole[i].space[j]);
						}
					}
				}
				printf("\n");
			}
		}
		else
		{
			break;
		}
	}
	return 0;
}
