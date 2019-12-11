//
// Created by 233 on 2019/12/11.
//

#ifndef WEEK3_IO_H
#define WEEK3_IO_H

#include <vector>
#include "Card.h"

void printDeck(std::vector<Card> &deck);

void shilfDeck(std::vector<Card> &card);

int getRandomNum(int min, int max);

void swapCard(Card &current,Card &toSwap);

bool playBlackJack(std::vector<Card> &card);
#endif //WEEK3_IO_H
