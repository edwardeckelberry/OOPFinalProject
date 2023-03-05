//
// Created by Edward Eckelberry on 4/26/22.
//

#ifndef FINAL_PROJECT_MENUTEXTS_H
#define FINAL_PROJECT_MENUTEXTS_H
#include <SFML/Graphics.hpp>
#include "Fonts/Fonts.h"

struct MenuTexts
{
    sf::Text title;
    sf::Text exit;
    sf::Text splash;
    sf::Text className;
    sf::Text name;
    sf::Text rule;

    MenuTexts();
    sf::FloatRect getGlobalBounds() const;
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
};


#endif //FINAL_PROJECT_MENUTEXTS_H
