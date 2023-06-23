#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i[5] = {80,60,55,22,75};
	printf("i[0]의 값은 %d입니다.\n",i[0]);
	printf("i[0]의 주소는 %p입니다.\n",&i[0]);
	printf("i의 값은 %p입니다.\n",i);
	printf("i+1의 값은 %p입니다.\n",i+1);
	printf("*(i+1)의 값은 %d입니다.\n",*(i+1));	
	return 0;
	
}
