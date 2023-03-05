//
// Created by Edward Eckelberry on 4/13/22.
//

#include "KeyBoardEvents.h"
bool KeyBoardEvents::isEscape()
{
    return sf::Keyboard::isKeyPressed(sf::Keyboard::Escape);
}

bool KeyBoardEvents::isButtonPress()
{
    return sf::Keyboard::isKeyPressed(sf::Keyboard::Right) ||
            sf::Keyboard::isKeyPressed(sf::Keyboard::Left);
}
//    (
//                   (sf::Keyboard::isKeyPressed(sf::Keyboard::RControl) ||
//                    sf::Keyboard::isKeyPressed(sf::Keyboard::LControl)) ||
//                   (sf::Keyboard::isKeyPressed(sf::Keyboard::LSystem) ||
//                    sf::Keyboard::isKeyPressed(sf::Keyboard::RSystem)))