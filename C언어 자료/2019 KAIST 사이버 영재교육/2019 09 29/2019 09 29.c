#include <stdio.h>
#include <stdlib.h>
typedef enum{SPADES, CLUBS, DIAMONDS, HEARTS} Suit;
typedef struct{
	Suit suit;
	int number;
}Card;
Card deck[52];
int main() {
	int i, j;
	Card card;
	for(i=0;i<4;i++)
	{
		for(j=0;j<12;j++)
		{
			deck[(i*12)+j].suit = i;
			deck[(i*12)+j].number = j;
		}
	}
	srand((unsigned)time(NULL)); //���� �κ� ���� 
	card = deck[rand()%52];
	printf("���� ī��� ");
	switch(card.suit){
		case SPADES : printf("�����̵�"); break;
		case CLUBS :  printf("Ŭ�ι�"); break;
		case DIAMONDS : printf("���̾Ƹ��"); break;
		case HEARTS :  printf("��Ʈ"); break;
	}
	printf(" %d�Դϴ�.\n", card.number);
	return 0;
}
