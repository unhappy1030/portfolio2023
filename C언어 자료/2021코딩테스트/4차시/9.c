#include<stdio.h>

int main(){
    int size, mid;
    int n1, n2;
    int i, j;
    printf("size? > ");
    scanf("%d", &size);
    mid = size / 2 + 1;
    n1=((size * 2) - 1) / 2;
    n2=n1;
    for(i=1;i<=size;i++){
        if(i == mid){    
            for(j=0;j<size-i;j++){
                printf(" ");
            }
            for(j=1;j<=(i*2)-1;j++){
                printf("*");
            }
        }
        else{
            for(j=0;j<(size*2)-1;j++){
                if(n1 == j || n2 == j){
                    printf("*");
                    if(n1 == j){
                      break;
                    }
                }
                else{
                    printf(" ");
                }
            }
        }
        n1++;
        n2--;
        printf("\n");
    }
    return 0;
}