#include <stdio.h>
#include <stdlib.h>
double E(int m[100], int n); 		//���(���)�� ���ϴ� �Լ�E�� �Ű������� �迭m�� �������� �ް� n�� ������ ������ �޴´�. 
double V(int l[100], int k); 		//�л��� ���ϴ� �Լ�V�� �Ű������� �迭l�� �������� �ް� k�� ������ ������ �޴´�. 
int i, j, t;
int a[100];							//ó������ ������ �Է¹޴� �迭�̴�.
int b[2];							//b[0]�� �ִ��� b[1]�� �ּڰ��� �����ϴ� �迭�̴�. 
double sum, e, v;					//sum, e, v�� ������ �ƴ� �Ǽ��� ���� �� �������� double�� ����Ͽ� �����Ѵ�. 
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
