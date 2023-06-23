#include<stdio.h>

int main(){
    int i, j, result=0;
    char input_color1[6],input_color2[6], input_color3[6];
    scanf("%s%s%s",&input_color1, &input_color2, &input_color3);
    for(i=0; i<3;i++){
        if(i == 0){
            for(j=0;j<6;j++)
                printf("%c",input_color1[j]);
            printf("\n");
            /*if(input_colors[i] == 'black') result += 10*0;
            else if(input_colors[i] == 'brown') result += 10*1;
            else if(input_colors[i] == 'red') result += 10*2;
            else if(input_colors[i] == 'orange') result += 10*3;
            else if(input_colors[i] == 'yellow') result += 10*4;
            else if(input_colors[i] == 'green') result += 10*5;
            else if(input_colors[i] == 'blue') result += 10*6;
            else if(input_colors[i] == 'violet') result += 10*7;
            else if(input_colors[i] == 'grey') result += 10*8;
            else if(input_colors[i] == 'white') result += 10*9;
            */
        }
        else if(i==1){
            for(j=0;j<6;j++)
                printf("%c",input_color2[j]);
            printf("\n");
            /*
            if(input_colors[i] == 'black') result += 0;
            else if(input_colors[i] == 'brown') result += 1;
            else if(input_colors[i] == 'red') result += 2;
            else if(input_colors[i] == 'orange') result += 3;
            else if(input_colors[i] == 'yellow') result += 4;
            else if(input_colors[i] == 'green') result += 5;
            else if(input_colors[i] == 'blue') result += 6;
            else if(input_colors[i] == 'violet') result += 7;
            else if(input_colors[i] == 'grey') result += 8;
            else if(input_colors[i] == 'white') result += 9;
            */
        }
        else{
            for(j=0;j<6;j++)
                printf("%c",input_color3[j]);
            printf("\n");
            /*
            if(input_colors[i] == 'black') result *= 1;
            else if(input_colors[i] == 'brown') result *= 10;
            else if(input_colors[i] == 'red') result *= 100;
            else if(input_colors[i] == 'orange') result *= 1000;
            else if(input_colors[i] == 'yellow') result *= 10000;
            else if(input_colors[i] == 'green') result *= 100000;
            else if(input_colors[i] == 'blue') result *= 1000000;
            else if(input_colors[i] == 'violet') result *= 10000000;
            else if(input_colors[i] == 'grey') result *= 100000000;
            else if(input_colors[i] == 'white') result *= 1000000000;
            */
        }
    }
    printf("%d",result);
    return 0;
}