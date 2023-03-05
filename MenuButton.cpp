//
// Created by Edward Eckelberry on 4/13/22.
//

#include "MenuButton.h"

MenuButton::MenuButton()
{
    text.setFont(Fonts::getFont());
    text.setString("Click to start");
    text.setPosition({380,430});
    rectangle.setFillColor(sf::Color::Red);
    rectangle.setSize({250,100});
    rectangle.setPosition({350, 400});
}

void MenuButton::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    window.draw(rectangle);
    window.draw(text);
}



sf::FloatRect MenuButton::getGlobalBounds() const
{
    return rectangle.getGlobalBounds();
}

