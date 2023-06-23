#include<stdio.h>

int main() {
    int i, input_num;
    double distance;
    int first_point[2], second_point[2], r1, r2;
    scanf("%d", &input_num);
    for(i=0;i<input_num;i++){
        scanf("%d%d%d%d%d%d", &first_point[0], &first_point[1], &r1, &second_point[0], &second_point[1], &r2);
        int r=r1+r2,dx=first_point[0]-second_point[0], dy=first_point[1]-second_point[1];
        distance=((dx*dx)+(dy*dy));
        r=r*r;
        if(distance == 0 && r1 != r2){
            printf("0\n");
            continue;
        }
        else if(distance == 0 && r1 == 0 && r2 == 0){
            printf("1\n");
            continue;
        }
        else if(distance == 0 && r1 == r2){
            printf("-1\n");
            continue;
        }
        if(distance == r){
            printf("1\n");
        }
        else if(distance < r){
            printf("2\n");
        }
        else{
            printf("0\n");
        }
    }
    return 0;
}