//
// Created by Edward Eckelberry on 4/26/22.
//

#ifndef FINAL_PROJECT_GAMETEXTS_H
#define FINAL_PROJECT_GAMETEXTS_H
#include <SFML/Graphics.hpp>
#include "Fonts/Fonts.h"
struct GameTexts
{
    sf::RectangleShape outerRectangle;
    sf::Text text;
    sf::RectangleShape rectangle;
    sf::Text lose;
    sf::Text win;
    GameTexts();

    sf::FloatRect getGlobalBounds() const;

    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
};


#endif //FINAL_PROJECT_GAMETEXTS_H
