#include <stdio.h>
#include <stdlib.h>
#include <math.h> // �������� ����ϱ� ���� ���̺귯�� 
typedef struct{
	int x;
	int y;
}Point;
Point point[3];
int main(int argc, char *argv[]) {
	int i, j, t, k;
	int a=0, b=0, c=0;
	int L[3];
	for(i=0;i<3;i++)
	{
		scanf("%d%d", &point[i].x, &point[i].y);
	}
	L[0] = ((point[0].x - point[1].x) * (point[0].x - point[1].x)) + ((point[0].y - point[1].y) * (point[0].y - point[1].y));
	L[1] = ((point[0].x - point[2].x) * (point[0].x - point[2].x)) + ((point[0].y - point[2].y) * (point[0].y - point[2].y));
	L[2] = ((point[2].x - point[1].x) * (point[2].x - point[1].x)) + ((point[2].y - point[1].y) * (point[2].y - point[1].y));
	L[0] = sqrt(L[0]); //�����ٰ�� 
	L[1] = sqrt(L[1]);
	L[2] = sqrt(L[2]); 
	for(i=0;i<3;i++)//���� ū ���� c�� �ֱ� 
	{
		if(c < L [i])
		{
			c = L[i];
			t=i;
		}
	}
	for(i=0;i<3;i++)//���� ū�� �ܿ� �ٸ� �� ���� ���� a,b�� �ֱ� 
	{
		if(i != t)
		{
			a=L[i];
			k=i;
		}
		if(i != t && i != k)
		{
			b=L[i];
		}
	}
	if(a + b > c)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
}
