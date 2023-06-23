#include <stdio.h>

int main() {
    int height;
    int i, j, st = 0, b = 0;
    printf("size? > ");
    scanf("%d", &height);
    for(i=1;i<=height;i++){
        for(j=0;j<height-i;j++){
            printf(" ");
        }
        for(j=1;j<=(i*2)-1;j++){
            printf("*");
        }
        printf("\n");
    }
    if(height % 2 == 1){
        st = height / 2;
    }
    else{
        st = height / 2 - 1;
    }
    st = st * 2 - 1;
    b = ((height * 2) - 1) / 2 - (st/ 2);
    for(i = 1; i <= height; i++){
        for(j = 0; j < b; j++){
            printf(" ");
        }
        for(j = 0; j < st; j++){
            printf("|");
        }
        printf("\n");
    }
    return 0;
}