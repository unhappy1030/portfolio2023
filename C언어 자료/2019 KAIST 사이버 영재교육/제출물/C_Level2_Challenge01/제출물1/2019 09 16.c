#include <stdio.h>
#include <stdlib.h>
double E(int m[100], int n); 		//평균(기댓값)을 구하는 함수E의 매개변수의 배열m은 변량들을 받고 n은 변량의 갯수를 받는다. 
double V(int l[100], int k); 		//분산을 구하는 함수V의 매개변수의 배열l은 변량들을 받고 k는 변량의 갯수를 받는다. 
int i, j, t;
int a[100];							//처음으로 변량을 입력받는 배열이다.
int b[2];							//b[0]은 최댓값을 b[1]은 최솟값을 저장하는 배열이다. 
double sum, e, v;					//sum, e, v는 정수가 아닌 실수로 나올 수 있음으로 double을 사용하여 선언한다. 
int main() {
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		scanf("%d", &a[i]);
	}
	e=E(a, t);
	v=V(a, t);
	b[0]=a[0];
	b[1]=a[0];
	for(i=0;i<t;i++)
	{
		if(a[i]>b[0])
		{
			b[0]=a[i];
		}
		if(a[i]<b[1])
		{
			b[1]=a[i];
		}
	}
	printf("%lf %lf %d %d", e, v, b[0], b[1]);
	return 0;
}
double E(int m[100], int n)
{
	sum=0;
	for(i=0;i<t;i++)
	{
		sum+=a[i];
	}
	return sum / n;
}
double V(int l[100], int k)
{
	sum=0;
	for(i=0;i<t;i++)
	{
		sum=sum+(l[i]-e)*(l[i]-e);
	}
	return sum / k;
}
