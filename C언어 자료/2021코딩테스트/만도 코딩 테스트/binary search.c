#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int *data, int t, int low, int high);

int main() {
    int data_num, target_num, i, j;
    int *data, *target, *result;
    scanf("%d", &data_num);
    data=(int*)malloc(sizeof(int) * data_num);
    for(i = 0; i < data_num; i++){
        scanf("%d", &data[i]);
    }
    scanf("%d", &target_num);
    target=(int*)malloc(sizeof(int) * target_num);
    result=(int*)malloc(sizeof(int) * target_num);
    for(i = 0; i < target_num; i++){
        scanf("%d", &target[i]);
    }
    for(i = 0; i < target_num; i++){
        result[i] = BinarySearch(data, target[i], 0, data_num);
        printf("%d ", result[i]);
    }
    return 0;
}
int BinarySearch(int *data, int t, int low, int high){
    int mid;
    while(low <= high){
        mid = (low + high) / 2;
        if(data[mid] == t){
            return mid;
        }
        else if(data[mid] > t){
            high = mid - 1;
        }
        else if(data[mid] < t){
            low = mid + 1;
        }
    }
    return -1;
}