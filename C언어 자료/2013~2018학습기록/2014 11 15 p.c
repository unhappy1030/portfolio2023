#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i[5] = {80,60,55,22,75};
	printf("i[0]�� ���� %d�Դϴ�.\n",i[0]);
	printf("i[0]�� �ּҴ� %p�Դϴ�.\n",&i[0]);
	printf("i�� ���� %p�Դϴ�.\n",i);
	printf("i+1�� ���� %p�Դϴ�.\n",i+1);
	printf("*(i+1)�� ���� %d�Դϴ�.\n",*(i+1));	
	return 0;
	
}
