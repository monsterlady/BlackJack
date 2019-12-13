//
// Created by 233 on 2019/12/11.
//
#include <vector>
#include "io.h"
#include "Card.h"


void printDeck(std::vector<Card> &deck)
{
    int counter = 13;
    for (int card = 0; card < 52; ++card)
    {
        if(card % counter == 0){
            std::cout << std::endl;
        }
       deck[card].printCard();
        std::cout << ' ';
    }

    std::cout << '\n';
}

void shilfDeck(std::vector<Card> &card) {

   for(int shilfTime = 0; shilfTime < 52; shilfTime++){
        int random = getRandomNum(0,51);
        swapCard(card[shilfTime],card[random]);
        //shilfTime++;
    };
    printDeck(card);
}

int getRandomNum(int min, int max) {
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

void swapCard(Card &current, Card &toSwap) {
    Card temp = current;
    current = toSwap;
    toSwap = temp;
}

bool playBlackJack(std::vector<Card> &card) {
    // Set up the initial game state
    int index = 0;
    Card *cardPtr = &card[index];
    int playerScore(0);
    int dealerScore(0);
    char response = 'h';

    //dealerScore += cardPtr->getCardValue();
    //playerScore += cardPtr->getCardValue();

    while (response != 's')
    {
        Card *nwPtr = &card[index];
        if((index % 2 == 0 || index == 0)){
            std::cout << "Dealer total score is " << dealerScore << std::endl;
            if( dealerScore < 17){
                std::cout << "Dealer chooses hit" <<std::endl;
                dealerScore += nwPtr->getCardValue();
            } else {
                std::cout << "Dealer chooses stop" <<std::endl;
            }
        } else {
            std::cout << "Your total score is " << playerScore << " The card is ";
            nwPtr->printCard();
            std::cout << "\nWill you hit or stand (h/s)? ";
            std::cin >> response;
            if(response == 'h'){
                playerScore += nwPtr->getCardValue();
            }}

        index++;
    }

    // Players that go over 21 get busted
    if (playerScore > 21)
        return false;

    // Dealer must stop when value is at least 17
    /*int index2 = 0;
    while (dealerScore < 17){
        index2++;
        Card *ptr2 = &card[index2];
        dealerScore += ptr2->getCardValue();
    }*/


    std::cout << "The dealer's score is " << dealerScore << '\n' << "And your score is " << playerScore << std::endl;

    return playerScore > dealerScore || dealerScore > 21;
}






