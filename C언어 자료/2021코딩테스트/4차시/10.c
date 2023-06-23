#include<stdio.h>

int main(){
    int size;
    int i, j, st_n=1;
    printf("size? >> ");
    scanf("%d", &size);
    for(i=1;i<=(size * 2)-1;i++){
        if(i == size){
            for(j=1;j<=(size * 2);j++){
                printf("*");
            }
        }
        else{
            for(j=1;j<=st_n;j++){
                printf("*");
            }
            for(j=1;j<=(size * 2)-(st_n*2);j++){
                printf(" ");
            }
            for(j=1;j<=st_n;j++){
                printf("*");
            }
        }
        if(i >= size){
            st_n--;
        }else{
            st_n++;
        }
        printf("\n");
    }
    return 0;
}