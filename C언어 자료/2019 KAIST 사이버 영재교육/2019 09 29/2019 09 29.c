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
	srand((unsigned)time(NULL)); //랜덤 부분 질문 
	card = deck[rand()%52];
	printf("뽑힌 카드는 ");
	switch(card.suit){
		case SPADES : printf("스페이드"); break;
		case CLUBS :  printf("클로버"); break;
		case DIAMONDS : printf("다이아몬드"); break;
		case HEARTS :  printf("하트"); break;
	}
	printf(" %d입니다.\n", card.number);
	return 0;
}
