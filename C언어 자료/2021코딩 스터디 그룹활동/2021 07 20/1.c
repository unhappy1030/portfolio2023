#include <stdio.h>

int main(void) {
    int n, i, j, temp=0;
    int input[100]={0,};
    int result[100]={0,};
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &input[i]);
        for(j=0;j < input[i];j++){
            result[i-j]=result[i-j-1];
        }
        result[i-input[i]] = i+1;
    }
    for(i=0;i<n;i++){
        printf("%d ", result[i]);
    }
    return 0;
}