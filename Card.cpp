//
// Created by 233 on 2019/12/6.
//

#include "Card.h"
Card::Card(Rank rank1, Suit suit1){
    this->suit = suit1;
    this->rank = rank1;
}

Rank Card::getRank() const {
    return rank;
}

Suit Card::getSuit() const {
    return suit;
}

void Card::setRank(Rank rank) {
    Card::rank = rank;
}

void Card::setSuit(Suit suit) {
    Card::suit = suit;
}

void Card::printCard(){

    switch (suit)
    {
        case Suit::SUIT_CLUB:	   std::cout << 'C'; break;
        case Suit::SUIT_DIAMOND: std::cout << 'D'; break;
        case Suit::SUIT_HEART:   std::cout << 'H'; break;
        case Suit::SUIT_SPADE:   std::cout << 'S'; break;
        default:           std::cout << '?'; break;
    }

    switch (rank)
    {
        case Rank::RANK_2:	 std::cout << '2'; break;
        case Rank::RANK_3:	 std::cout << '3'; break;
        case Rank::RANK_4:	 std::cout << '4'; break;
        case Rank::RANK_5:	 std::cout << '5'; break;
        case Rank::RANK_6:	 std::cout << '6'; break;
        case Rank::RANK_7:	 std::cout << '7'; break;
        case Rank::RANK_8:	 std::cout << '8'; break;
        case Rank::RANK_9:	 std::cout << '9'; break;
        case Rank::RANK_10:	 std::cout << 'T'; break; // Note: T = 10
        case Rank::RANK_JACK:  std::cout << 'J'; break;
        case Rank::RANK_QUEEN: std::cout << 'Q'; break;
        case Rank::RANK_KING:	 std::cout << 'K'; break;
        case Rank::RANK_ACE:	 std::cout << 'A'; break;
        default:         std::cout << '?'; break;
    }
}

int Card::getCardValue()
{
    switch (rank)
    {
        case Rank::RANK_2:     return 2;
        case Rank::RANK_3:	 return 3;
        case Rank::RANK_4:	 return 4;
        case Rank::RANK_5:	 return 5;
        case Rank::RANK_6:	 return 6;
        case Rank::RANK_7:	 return 7;
        case Rank::RANK_8:	 return 8;
        case Rank::RANK_9:	 return 9;
        case Rank::RANK_10:	 return 10;
        case Rank::RANK_JACK:	 return 10;
        case Rank::RANK_QUEEN: return 10;
        case Rank::RANK_KING:	 return 10;
        case Rank::RANK_ACE:	 return 11; // ace can be 1 depending on game
        default:         return 0;
    }
}