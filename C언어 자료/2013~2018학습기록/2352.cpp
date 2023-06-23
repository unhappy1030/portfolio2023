#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int getNum(char *input);
int main() {
	char input[100];
	int i;
	int f;
	int s;
	int t;
	int r;
	scanf("%s", input);
	f=getNum(input);
	scanf("%s", input);
	s=getNum(input);
	scanf("%s", input);
	t=getNum(input);
	r=(f*10)+s;
	printf("%d", r);
	for(i=0;i<t;i++)
	{
		printf("%s", "0");
	}
	return 0;
}
int getNum(char *input)
{
	int num;
	if(strcmp(input,"black")==0) num=0;
	else if(strcmp(input,"brown")==0) num=1;
	else if(strcmp(input,"red")==0) num=2;
	else if(strcmp(input,"orange")==0) num=3;
	else if(strcmp(input,"yellow")==0) num=4;
	else if(strcmp(input,"green")==0) num=5;
	else if(strcmp(input,"blue")==0) num=6;
	else if(strcmp(input,"violet")==0) num=7;
	else if(strcmp(input,"grey")==0) num=8;
	else if(strcmp(input,"white")==0) num=9;
	return num;
}
