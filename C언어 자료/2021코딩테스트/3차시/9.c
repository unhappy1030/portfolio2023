#include <stdio.h>

int main() {
    int num1, num2;
    int n1, n2;
    int i=2, j=2, output;
    printf("2개의 숫자를 입력 ");
    scanf("%d%d", &num1, &num2);
    n1 = num1;
    n2 = num2;
    while(1){
        if(n1 > 100 && n2 > 100){
            break;
        }
        if(n1 < n2){
            output = n1;
            n1 = num1 * i;
            i++;
        }
        else if(n1 > n2){
            output = n2;
            n2 = num2 * j;
            j++;
        }
        else{
            n1 = num1 * i;
            i++;
            n2 = num2 * j;
            j++;
            continue;
        }
        printf("%d\n",output);
    }
    return 0;
}