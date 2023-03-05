//
// Created by Edward Eckelberry on 4/13/22.
//

#ifndef FINAL_PROJECT_MENUBUTTON_H
#define FINAL_PROJECT_MENUBUTTON_H
#include <SFML/Graphics.hpp>
#include "Fonts/Fonts.h"

class MenuButton : public sf::Drawable
{
private:
    sf::Text text;

public:
    MenuButton();

    sf::FloatRect getGlobalBounds() const;

    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;


    sf::RectangleShape rectangle;
};


#endif //FINAL_PROJECT_MENUBUTTON_H
