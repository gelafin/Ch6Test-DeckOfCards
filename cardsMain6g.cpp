#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

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
  RANK_ACE,
  RANK_MAX_RANKS
};

//normally would use namespace to prevent comparisons between different enum types. See comment above enum Rank
enum CardSuit{
  SUIT_CLUBS,
  SUIT_SPADES,
  SUIT_HEARTS,
  SUIT_DIAMONDS,
  SUIT_MAX_SUITS
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

void printDeck(const std::array<Card, 52> &deck){
  for(auto &card : deck){
    printCard(card);
    std::cout << " ";
  }
}

void swapCard(Card &a, Card &b){

Card temp = a;
a = b;
b = temp;
}

void shuffleDeck(std::array<Card, 52> &deck){
  std::srand(std::time(nullptr));

  using index_t = std::array<Card, 52>::size_type;

  for(index_t card {0}; card < deck.size(); card++){
    index_t randomIndex {std::rand() % (deck.size() + 1)};
    swapCard(deck.at(card), deck.at(randomIndex));
  }

}

int main(){

std::array<Card, 52> deck;

using index_t = std::array<Card, 52>::size_type;

  for(index_t card {0}, suitCount {0}, rankCount {0}; card < deck.size(); suitCount++, rankCount++, card++){ //step through all four suits
    if(suitCount == static_cast<index_t> (SUIT_MAX_SUITS)){
      suitCount = 0;
    }
    if(rankCount == static_cast<index_t> (RANK_MAX_RANKS)){
      rankCount = 0;
    }
    deck.at(card).suit = static_cast<CardSuit> (suitCount);
    deck.at(card).rank = static_cast<CardRank> (rankCount);
  }

printDeck(deck);

std::cout << "\n\nNow shuffle\n\n";

shuffleDeck(deck);

printDeck(deck);

int sillyviewervar;
std::cin >> sillyviewervar;

return 0;
}
