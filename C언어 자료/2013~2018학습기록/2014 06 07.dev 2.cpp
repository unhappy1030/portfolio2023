#include <stdio.h>
#include <stdlib.h>

//int main(){
//	int i=0, j=0, k=0;
//	char c;
//	scanf("%d", &j);
//	for(i=j;i<101;i++)
//	{
//		if(j==99) 
//		{
//			break;
//		}
//		k = k + i;
//	}
//	 printf(" %d", k);
//	return 0;
//}
int main() {
	int i, j, k=0, o=0;
	scanf("%d", &j);
	for(i=0;i<10;i++)
	{
		if(j % 3 == 0)
		{
			o++;
		}
		if(j % 5 == 0)
		{
			k++;
		}
	}
	printf("%d %d", o, k);
	return 0;
}
