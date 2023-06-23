#include <stdio.h>
#include <stdlib.h>


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
int si, sj, ei, ej, s;
int visit(int, int);
int main (void)
{
	s=0;
	si=1;sj=1;ei=8;ej=8;
	printf("miro \n");
	if(visit(si, sj)==0) printf("X");
	else printf("\n");
}
int visit(int i, int j)
{
	m[i][j]=1;
	if(ei==i && ej==j)s=1;
	if(s!=1 && (m[i][j+1])==0)visit(i, j+1);
	if(s!=1 && (m[i+1][j])==0)visit(i+1, j);
	if(s!=1 && (m[i][j-1])==0)visit(i, j-1);
	if(s!=1 && (m[i-1][j])==0)visit(i-1, j);
	if(s==1) printf("%d, %d \n", i, j);
	return s;
}
