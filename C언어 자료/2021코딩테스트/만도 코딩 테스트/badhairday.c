#include<stdio.h>
#include<stdlib.h>

int Stem(int *cows, int idx, int end);
int Branch(int *cows, int start, int idx, int end);

int main() {
    int cow_num, i, result=0;
    int *cows;
    scanf("%d", &cow_num);
    cows = (int*)malloc(sizeof(int) * cow_num);
    for(i = 0; i < cow_num; i++){
        scanf("%d", &cows[i]);
        printf("%d ", cows[i]);
    }
    result = Stem(cows, cows[0], cow_num-1);
    printf("%d", result);
    return 0;
}

int Stem(int* cows, int idx, int end){
    printf("stem : idx-%d\n", idx);
    if(idx == end - 1){
        return Branch(cows, idx, idx + 1, end);
    }
    return Stem(cows, idx+1, end) + Branch(cows, idx, idx+1, end);
}

int Branch(int* cows, int start, int idx, int end){
    printf("branch : start-%d idx-%d\n", start, idx);
    if(idx == end){
        if(cows[idx] < cows[start]){
            return 1;
        }
        else{
            return 0;
        }
    }
    if(cows[idx] < cows[start]){
        return 1 + Branch(cows, start, idx+1, end);
    }
    return 0;
}