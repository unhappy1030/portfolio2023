#include <stdio.h>

int main(){
    int N,p,q,z,k; 
    scanf("%d",&N);
    q=N%10; //N의 1의자리 수 
    p=(N-q)*0.1; //N의 10의자리 수
    if ((p+q)>=10) k=(p+q)%10;
    if ((p+q)<10) k=p+q;
    
    int i=0;
    while (1) { 
        z=(q*10)+k;
        i++;
        if (N==z) break;
        q=z%10;
        p=(z-q)*0.1;
        if ((p+q)>=10) k=(p+q)%10;
        else if ((p+q)<10) k=p+q;
    }
    printf("%d",i);
    return 0;
}