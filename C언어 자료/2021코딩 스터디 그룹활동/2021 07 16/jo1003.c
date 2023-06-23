#include <stdio.h>
#include <stdlib.h>



int main() {
    int i, n, *student, *line, change_pos_num, temp;
    scanf("%d", &n);
    student = malloc(sizeof(int) * n);
    *line = malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d", &student[i]);
        if(i == 0) line[i] = 1;
        else if(student[i]!=0){
            change_pos_num=i-student[i];
            temp=line[change_pos_num];
            line[change_pos_num] = i+1;
            line[i];
        }
    }
    return 0;
}