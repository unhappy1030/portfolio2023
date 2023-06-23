#include<stdio.h>

int main() {
    int N, F, cnt=1;
    scanf("%d%d", &N, &F);
    N=N-(N % 100);
    while(cnt<100){
        if(N % F == 0) break;
        N++;
        cnt++;
    }
    printf("%02d", N % 100);
    return 0;
}