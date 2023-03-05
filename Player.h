//
// Created by Edward Eckelberry on 4/18/22.
//

#ifndef FINAL_PROJECT_PLAYER_H
#define FINAL_PROJECT_PLAYER_H
#include "Deck.h"

class Player : public sf::Drawable
{
private:

    int points = 0;
public:
    Player();
    Deck deck;
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;

};


#endif //FINAL_PROJECT_PLAYER_H
