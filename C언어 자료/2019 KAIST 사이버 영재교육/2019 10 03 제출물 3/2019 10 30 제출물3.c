#include <stdio.h>
#include <stdlib.h>
int i, c=0, r;
int f(char t[32],int n, int k); 	//�Էµ� ���ڿ� ������ ���� �޴� �Լ�f ���� 
int main() {
	char a[32]={0,};
	scanf("%s", &a);		//���ڿ��Է� 
	for(i=0;i<32;i++)
		if(a[i]==0)
			break;
		else
			c++;			//�迭 a�� ������ �ϳ��� ����
	r=f(a, c-1, 0);			//�Լ����� ��ȯ�� ���� r�� �ִ´� 
	if(r==1)
		printf("true"); 
	else
		printf("false");
	return 0;
}
int f(char t[32],int n, int k){
	if(k==n)				//���� n���� �����Ҷ� ���ڿ��� ���̰� Ȧ���̸� ���� �κа� �޺κ��� ���� ��찡 ���� k��n�� ���� ���� �� ����� �ö��̴� �׷��Ƿ� ȸ������ �����Ѵ�. 
	{
		return 1;
	}
	if(c / 2  == k)			//k���� ���ڿ��� ������ ���� ���� ���ڿ��� ���̰� ¦���� �� �߾ӿ��� ������ ���� Ȯ�� �ϰ� ���� ��� 1�� ��ȯ�Ѵ�. 
	{
			if(t[k]==t[n])
			{
				return 1;
			}
			else
			{
				return 0;
			}
	}
	if(t[k]==t[n])			//������ ���� �����Ұ�� ������ k���� ���ϰ� ������ n���� ���ҽ�Ų�� 
	{
		return f(t, n-1, k+1);
	}
	else
	{
		return 0;
	}
}
