#include <stdio.h>
#include <stdlib.h>
int i, c=0, r;
int f(char t[32],int n, int k); 	//입력된 문자와 문자의 수를 받는 함수f 선언 
int main() {
	char a[32]={0,};
	scanf("%s", &a);		//문자열입력 
	for(i=0;i<32;i++)
		if(a[i]==0)
			break;
		else
			c++;			//배열 a의 개수를 하나씩 센다
	r=f(a, c-1, 0);			//함수에서 반환된 값을 r에 넣는다 
	if(r==1)
		printf("true"); 
	else
		printf("false");
	return 0;
}
int f(char t[32],int n, int k){
	if(k==n)				//점점 n값이 감소할때 문자열의 길이가 홀수이면 앞의 부분과 뒷부분이 같은 경우가 생겨 k와n이 같은 경우는 한 가운데에 올때이다 그러므로 회문임이 성립한다. 
	{
		return 1;
	}
	if(c / 2  == k)			//k값이 문자열의 반절과 같을 경우는 문자열의 길이가 짝수일 때 중앙에서 양쪽의 값을 확인 하고 같을 경우 1을 반환한다. 
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
	if(t[k]==t[n])			//양쪽의 값이 동일할경우 앞쪽의 k값은 더하고 뒤쪽의 n값은 감소시킨다 
	{
		return f(t, n-1, k+1);
	}
	else
	{
		return 0;
	}
}
