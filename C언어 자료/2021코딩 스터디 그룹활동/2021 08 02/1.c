#include <stdio.h>


int main() {
    int i;
    char none;
    char array[6], text;
    array[0] = 'J';
    array[1] = 'U';
    array[2] = 'N';
    array[3] = 'G';
    array[4] = 'O';
    array[5] = 'L';
    scanf("%c", &text);
    if(text==('J'|'j')){
        printf("%d",0);
    }
    else if(text==('u'|'U')){
        printf("%d",1);
    }
    else if(text==('n'|'N')){
        printf("%d",2);
    }
    else if(text==('g'|'G')){
        printf("%d",3);
    }
    else if(text==('o'|'O')){
        printf("%d",4);
    }
    else if(text==('l'|'L')){
        printf("%d",5);
    }
    else{
        printf("none");
    }
}