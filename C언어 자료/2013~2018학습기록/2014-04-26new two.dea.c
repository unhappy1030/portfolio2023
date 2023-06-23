#include <stdio.h>
#include <stdlib.h>

void recurse(int i);

int m[10][10]={
	{2,2,2,2,2,2,2,2,2,2},
	{2,0,0,0,0,0,0,0,0,2},
	{2,0,2,0,2,0,0,2,2,2},
	{2,2,0,0,0,0,2,0,0,2},
	{2,0,0,2,2,0,0,0,2,2},
	{2,0,2,0,0,0,0,2,0,2},
	{2,0,0,2,0,2,0,0,0,2},
	{2,0,0,2,0,0,0,2,0,2},
	{2,0,0,0,0,0,2,0,0,2},
	{2,2,2,2,2,2,2,2,2,2}
	};
int Si, Sj, Ei, Ej, s;
int visit(int , int);
int main()
{
	s=0;
	Si=1; Sj=1; Ei=8; Ej=8;
	pritnf("miro \n");
	if(visit(Si, Sj)==0)printf("출구를 찾을 수 없습니다");
	else pirntf("\n"); 
	return 0;
}
int visit(int i, int j)
{
	m[i][j]=1;
	if(i==Ei && j == Ej)s=1;
	if(s != 1 && m[i][j+1] == 0)visit(i,j+1);
	if(s != 1 && m[i+1][j] == 0)visit(i+1,j);
	if(s != 1 && m[i][j-1] == 0)visit(i,j-1);
	if(s != 1 && m[i-1][j] == 0)visit(i-1,j);
	if(s == 1) printf("%d, %d \n", i, j);
	return s;
}
	


