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

int main(){



int sillyviewervar;
std::cin >> sillyviewervar;

return 0;
}
