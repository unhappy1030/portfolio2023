#include <stdio.h>
#include <stdlib.h>


/*
int main() {
	int i=0, s=0;
	while(1)
	{
		scanf("%d", &i);
		if(i % 3 == 0)
		{
			
			s=i / 3;
			printf("%d", s);
		}
		else
		if(i==-1)break;
		
	}
	return 0;
}*/

int main(){
	int i=0, j=0, s=0;
	char c, y, n;
	
	while(1){
		scanf(" %d", &i);
		scanf(" %d", &j);
		s=i*j/2;
		printf("계속하시겠습니까?");
		scanf("%c", &c);
		if(c==y)
		{
	
		}
		if(c==n) break;
		
	}
	printf("입력한 삼각형의 넓이는 %.1lf입니다", s);
	return 0;
}/*
int main(){
 int i=1, s=0, c=0, v=0;
 double a;
 while(1){
  scanf("%d", &i);
  v=i>100;
  c++;
  s=s+i-v;
  c-1;
  a=(double)s / (double)c;
  if(i>=100) break;
 }
 printf("%d \n %.1lf", s, a);
} */
