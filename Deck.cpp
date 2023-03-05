//
// Created by Edward Eckelberry on 4/13/22.
//

#include "Deck.h"

Deck::Deck()
{

    for(int i = 0; i < 13; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cards.emplace_back(Ranks(i), Suits(j));
            //emplace allows you to pass in instructions for a constructor
        }
    }
    //setPosition(0, 0);
}

void Deck::shuffle()
{
    int amountOfCards = 52;
    srand(time(nullptr));
    for(int i = 0; i<amountOfCards; i++)
    {
        int r = rand() % 52;
        std::swap(cards[i], cards[r]);
    }
    setPosition(0, 0);
}

void Deck::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    for(int i = 0; i< 7; i++)
    {
        target.draw(cards[i]);
    }

}

void Deck::setPosition(float x, float y)
{

    cards[0].setPosition(480, 0);
    cards[1].setPosition(200, 350);
    cards[2].setPosition(220, 360);
    cards[3].setPosition(500, 380);
    cards[4].setPosition(520, 390);
    cards[5].setPosition(800, 350);
    cards[6].setPosition(820, 360);
//    for(int i = 0; i<4; i++)
//    {
//        if(i >0)
//            Helper::positionBottom(cards[(i-1)*13], cards[i*13]);
//        for(int j = 1; j<13; j++)
//            Helper::positionRight(cards[(i*13+j)-1], cards[i*13+j]);
//        //mathematically this allows the rows to be in their position
//    }
}

Card Deck::dealCard()
{
    Card card = cards[cards.size() -1];
    cards.pop_back();
    return card;
}

int Deck::getPoints() const
{
    int total = 0;

    for (int i = 0; i < 7; i++)
    {
        total += Count::getRankScore(cards[i].getRank());
    }
    return total;
}