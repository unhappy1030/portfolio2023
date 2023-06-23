#include<stdio.h>
#include<stdlib.h>
void Qsort(int *arr, int left, int right){
    int pivot = left;
    if(left >= right){
        return;
    }
    int i = pivot+1, j = right, temp;
    while(i<=j){
        while( i <= right && arr[i]<=arr[pivot]){
            ++i;
        }
        while(j > left && arr[j]>=arr[pivot]){
            --j;
        }
        if(i>j) break;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    temp = arr[j];
	arr[j] = arr[pivot];
	arr[pivot] = temp;
    Qsort(arr, left,j-1);
    Qsort(arr, j+1, right);
}

int main() {
    int i,  real_divisor_num, result;
    int *divisors;
    scanf("%d", &real_divisor_num);
    divisors=(int *)malloc(sizeof(int) * real_divisor_num);
    for(i=0;i<real_divisor_num;i++){
        scanf("%d", &divisors[i]);
    }
    Qsort(divisors, 0, real_divisor_num-1);
    if(real_divisor_num % 2 == 0){
        result = divisors[real_divisor_num/2] * divisors[(real_divisor_num/2)-1];
    }
    else{
        if(real_divisor_num==1){
            result=divisors[0] * divisors[0];
        }
        else{
            result=divisors[(real_divisor_num-1)/2] * divisors[(real_divisor_num-1)/2];
        }
    }
    printf("%d", result);
}