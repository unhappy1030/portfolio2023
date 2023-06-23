#include <stdio.h>
#include <stdlib.h>
void init();
void process();
void printm();
int i, j;
char c = 'A';
char m[3][5] = {0,};
int main() {
	init(); printm(); process(); printm();
	return 0;
}
void init(){
	for(i = 0; i < 3; i++)
		for(j=0; j<5; j++)
			m[i][j] = c++;
}
void process(){
	for(i=0;i<3;i++)
		for(j=0; j<5;j++)
			m[i][j]=m[i][j] + 32;
}
void printm(){
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
			printf("%c ", m[i][j]);
		printf("\n");
	}
}
