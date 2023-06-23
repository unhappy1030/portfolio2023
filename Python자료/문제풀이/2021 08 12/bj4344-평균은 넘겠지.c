#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, c, n, sum, count=0;
    double r, avg;
    int *arr;
    scanf("%d", &c);
    for(i=0;i<c;i++){
        scanf("%d", &n);
        arr=(int *)malloc(sizeof(int) * n);
        sum = 0;
        for(j=0;j<n;j++){
            scanf("%d", &arr[j]);
            sum+=arr[j];
        }
        avg=sum/n;
        for(j=0;j<n;j++){
            if(arr[j] > avg){
                count++;
            }
        }
        r = ((float)count / (float)n) * 100;
        printf("%.3lf", r);
        printf("%%\n");
        free(arr);
        count = 0;
    }
    return 0;
}