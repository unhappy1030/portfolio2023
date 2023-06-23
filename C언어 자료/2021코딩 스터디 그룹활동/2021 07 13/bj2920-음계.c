#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, count, check;
    for(i=0;i<8;i++){
        scanf("%d", &n);
        if(i==0){
            if(n==1){
                count=1;
                check=1;
                count+=check;
            }
            else if(n==8){
                count=8;
                check=-1;
                count+=check;
            }
            else{
                check=0;
            }
            continue;
        }
        if(check == 0) continue;
        else{
            if(n == count){
                count+=check;
                continue;
            }
            else{
                check = 0;
            }
        }
        count+=check;
    }
    if(check == 0) printf("mixed");
    else if(check == 1) printf("ascending");
    else if(check == -1) printf("descending");
    return 0;
}