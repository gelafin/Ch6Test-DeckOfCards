#include <iostream>

//normally would use namespace to prevent comparisons between different enum types, but that would make naming convention for numeric ranks redundantly "Rank::RANK_2" etc. This is a simple enough program that it won't ever have more than these two enum types, and there certainly won't be any danger of wanting to create two enum types with the same prefix of RANK_
enum CardRank{
  RANK_2,
  RANK_3,
  RANK_4,
  RANK_5,
  RANK_6,
  RANK_7,
  RANK_8,
  RANK_9,
  RANK_10,
  RANK_JACK,
  RANK_QUEEN,
  RANK_KING,
  RANK_ACE
};

//normally would use namespace to prevent comparisons between different enum types. See comment above enum Rank
enum CardSuit{
  SUIT_CLUBS,
  SUIT_HEARTS,
  SUIT_DIAMONDS,
  SUIT_SPADES
};

struct Card{
  CardRank rank;
  CardSuit suit;
};

void printCard(const Card &card){
  switch(card.rank){
    case RANK_2:
      std::cout << "2";
      break;
    case RANK_3:
      std::cout << "3";
      break;
    case RANK_4:
      std::cout << "4";
      break;
    case RANK_5:
      std::cout << "5";
      break;
    case RANK_6:
      std::cout << "6";
      break;
    case RANK_7:
      std::cout << "7";
      break;
    case RANK_8:
      std::cout << "8";
      break;
    case RANK_9:
      std::cout << "9";
      break;
    case RANK_10:
      std::cout << "T";
      break;
    case RANK_JACK:
      std::cout << "J";
      break;
    case RANK_QUEEN:
      std::cout << "Q";
      break;
    case RANK_KING:
      std::cout << "K";
      break;
    case RANK_ACE:
      std::cout << "A";
      break;
  }
  switch(card.suit){
    case SUIT_CLUBS:
      std::cout << "C";
      break;
    case SUIT_SPADES:
      std::cout << "S";
      break;
    case SUIT_HEARTS:
      std::cout << "H";
      break;
    case SUIT_DIAMONDS:
      std::cout << "D";
      break;
  }
}

int main(){

Card testCard;
testCard.rank = RANK_2;
testCard.suit = SUIT_HEARTS;

printCard(testCard);

int sillyviewervar;
std::cin >> sillyviewervar;

return 0;
}
