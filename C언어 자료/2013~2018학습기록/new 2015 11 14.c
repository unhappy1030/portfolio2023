#include <stdio.h>




void backtrack(int);




#define N 8

int column[N+1],    /* ������ ���� ���� �����ִ��� �Ǵ� */

    rup[2*N+1],     /* ������ �밢���� ���� �����ִ��� �Ǵ� */

    lup[2*N+1],     /* �»���� �밢���� ���� �����ִ��� �Ǵ� */

    queen[N+1];     /* ���� ��ġ */




int main(void)

{

    int i;




    for (i=1;i<=N;i++)

        column[i]=1;

    for (i=1;i<=2*N;i++)

        rup[i]=lup[i]=1;




    backtrack(1);

 return 0;

}




void backtrack(int i)

{

    int j,x,y;

    static int num=0;




    if (i>N) {

        printf("\n�� %d \n",++num);                 /* �� ��� */

        for (y=1;y<=N;y++) {

            for (x=1;x<=N;x++)

                if (queen[y]==x)

                    printf(" Q");

                else

                    printf(" .");

            printf("\n");

        }

    }

    else {

        for (j=1;j<=N;j++) {

            if (column[j]==1 && rup[i+j]==1 && lup[i-j+N]==1) {

                queen[i]=j;                         /* (i, j)�� ���� ��ġ */

                column[j]=rup[i+j]=lup[i-j+N]=0;    /* ������ ���� */

                backtrack(i+1);

                column[j]=rup[i+j]=lup[i-j+N]=1;    /* ������ �ǵ��� */

            }

        }

    }

}


