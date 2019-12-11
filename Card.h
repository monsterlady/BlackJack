//
// Created by 233 on 2019/12/6.
//

#ifndef WEEK3_CARD_H
#define WEEK3_CARD_H
#include <iostream>

enum class Rank{
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
    MAX_RANKS,
};

enum class Suit{
    SUIT_CLUB,
    SUIT_DIAMOND,
    SUIT_HEART,
    SUIT_SPADE,
    MAX_SUITS,
};

class Card{

private:
    Rank rank;
    Suit suit;

public:
    Card(Rank rank1, Suit suit1);

    int getCardValue();

    void printCard();

    void setRank(Rank rank);

    void setSuit(Suit suit);

    Rank getRank() const;

    Suit getSuit() const;
};


#endif //WEEK3_CARD_H
