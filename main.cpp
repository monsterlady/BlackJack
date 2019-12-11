#include "Card.h"
#include "io.h"
#include <vector>
#include <iostream>

int main() {

    // Vectors are much safer to work with than pointers
    std::vector<Card> deck;
    int numOfCards = 0;
    deck.reserve(52);

    //初始化数组
    for(int suit = 0; suit < (int)(Suit::MAX_SUITS);suit++){
        for(int rank = 0; rank < (int)(Rank::MAX_RANKS);rank++){
            Card *nwCard = new Card(Rank(rank),Suit(suit));
            deck[numOfCards] = *nwCard;
            numOfCards++;
        }
    }

    //检测数组
    printDeck(deck);
    shilfDeck(deck);
    //TODO Test
   if( playBlackJack(deck)){
       std::cout << "You win !" << std::endl;
   } else {
       std::cout << "You lose !" << std::endl;
   }

    return 0;
}




