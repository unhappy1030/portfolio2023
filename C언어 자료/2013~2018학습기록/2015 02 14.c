#include<stdio.h>
#include<stdlib.h>

int grp_arr[6][6]={
0,0,1,0,0,0,
0,0,0,0,0,0,
0,1,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,1,
0,0,0,1,0,0
};
int re[6]={0,};

int main() {
	int i, j, k=0, result_idx = 100;
	for(i=0;i<5;i++)
	{
		
		for(j=0;j<5;j++)
		{
			if(grp_arr[i][j] == 0)
			{
				result_idx=j;		
			}
		}
	}
	//result_idx=result_idx/5;
	printf("%d", result_idx);
	for()
	return 0;
}
