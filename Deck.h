//
// Created by Edward Eckelberry on 4/13/22.
//

#ifndef FINAL_PROJECT_DECK_H
#define FINAL_PROJECT_DECK_H
#include "Card.h"
#include <vector>
#include <cstdlib>
#include "Count.h"
#include "LinkedList.h"

class Deck : public sf::Drawable
{
private:
    std::vector<Card> cards;
public:
    Deck();
    void setPosition(float x, float y);
    void shuffle();
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
    Card dealCard();

    int getPoints() const;
};
#endif //FINAL_PROJECT_DECK_H
