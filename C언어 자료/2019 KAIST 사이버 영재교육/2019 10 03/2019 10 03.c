#include <stdio.h>
#include <stdlib.h>
int f(int n){
	if(n == 1)
		return 1;
	else
		return f(n-1) * n;
}
int f1(int m){
	int i, r=1;
	for(i=0;i < m;i++)
	{
		r*=(m-i);
	}
	return r;
}
int main() {
	int t;
	scanf("%d", &t);
	printf("%d, %d", f(t), f1(t));
	return 0;
}
