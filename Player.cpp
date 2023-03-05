//
// Created by Edward Eckelberry on 4/18/22.
//

#include "Player.h"

Player::Player()
{
    deck.shuffle();

    // count points
    points = deck.getPoints();
    std::cout << points << std::endl;
}

void Player::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(deck);
}
