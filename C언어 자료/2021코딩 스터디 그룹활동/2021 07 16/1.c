#include <stdio.h>

int main (){
    int p,q,x,y;
    int i=0;
    while(1){
        scanf("%d%d",&p,&q);
        if (p==0 && q==0) break;        
        x=0.5*(q-2*p);
        y=p-x;
        if (p>1000 || q>4000) printf("INPUT ERROR!");
        if (x<0 || y<0){
            if(p<=1000 && q<=4000){
                printf("0");
            }
        }
        if (x%1!=0 || y%1!=0) printf("0"); // x,y가 항상 자연수라는 법은 없으니까 x,y가 정수일 경우도 생각하고 배제해야 함! 
        if (p<=1000 && q<=4000 && x>=0 && y>=0) printf("%d %d",x,y);
        printf("\n");
    }
    return 0;
}