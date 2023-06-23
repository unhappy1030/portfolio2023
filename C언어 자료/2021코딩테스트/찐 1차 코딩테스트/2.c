#include <stdio.h>

int main() {
    int size;
    int i, j, table_size, right, left, height;
    printf("size? > ");
    scanf("%d", &size);
    table_size = size * 3;
    height = size * 2 + 1;
    right = table_size / 3 + 1;
    left = table_size - right + 1;
    printf("%d %d %d\n", table_size, right, left);
    for(i = 1; i <= height; i++){
        for(j = 1; j <= table_size; j++){
            if(j >= right && j <= left){
                printf(" ");
            }
            else{
                printf("N");
            }
        }
        if(i <= height / 2){
                right++;
        }
        else if(i == height / 2 + 1){
            right = table_size / 3 + 1;
            left = table_size / 3 + 1;
        }
        else if(i > height / 2 + 1){
            left++;
        }
        printf("\n");
    }
    return 0;
}