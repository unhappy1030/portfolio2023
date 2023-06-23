#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NN 4
#define MM 2
void process();
void printm();
void inputm();

int i, j, sumrow=0, sumcol=0, total=0;
int m[NN][MM]={1, 2, 3, 4, 5, 6, 7, 8};
int rowavg[NN]={0,};
int colavg[MM]={0,};

int main(){
	inputm();
	process();
	printm();

	return 0;
}
void process()
{
	for(i=0;i<NN;i++)
	{
		//init
		sumrow=0;
		for(j=0;j<MM;j++)
		{
			//calculate
			sumrow = sumrow + m[i][j];
			colavg[j] +=  m[i][j];	
			total += m[i][j];
		}
		rowavg[i]=sumrow;
	}
}
void printm()
{
	/*for(i=0;i<NN;i++)
	{
		for(j=0;j<MM;j++)
		{
			printf("%6d", m[i][j]);
		}printf("\n");
	}*/
	printf("row avg :");
	for(i=0;i<NN;i++)
	{
		printf("%d \n", rowavg[i]/2);
	}
	printf("col avg :");
	for(i=0;i<MM;i++)
	{
		printf("%d \n", colavg[i]/4);
	}
	printf("total avg : %d \n", (total/(MM*NN)));
}
void inputm()
{
	for(i=0; i<NN;i++)
	{
		//scanf("%d %d", &m[i][0], &m[i][1]);
	}
}

