//
// Created by Edward Eckelberry on 4/26/22.
//

#include "GameTexts.h"

GameTexts::GameTexts()
{
    text.setString("What's the count?");
    text.setCharacterSize(52);
    text.setFont(Fonts::getFont());
    text.setPosition({100,500});

    rectangle.setPosition({100, 600});
    rectangle.setSize({110, 100});

    lose.setString("You lose!");
    lose.setCharacterSize(100);
    lose.setFont(Fonts::getFont());
    lose.setPosition({300, 200});

    win.setString("You win!");
    win.setCharacterSize(100);
    win.setFont(Fonts::getFont());
    win.setPosition({300, 200});

    outerRectangle.setPosition({90, 590});
    outerRectangle.setSize({130, 120});
    outerRectangle.setFillColor(sf::Color::Black);
}

sf::FloatRect GameTexts::getGlobalBounds() const
{
    return text.getGlobalBounds(), rectangle.getGlobalBounds(),
    lose.getGlobalBounds(), win.getGlobalBounds(),
    outerRectangle.getGlobalBounds();
}

void GameTexts::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    window.draw(text);
    window.draw(rectangle);
    window.draw(lose);
    window.draw(win);
    window.draw(outerRectangle);
}
