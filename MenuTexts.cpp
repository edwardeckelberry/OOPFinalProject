//
// Created by Edward Eckelberry on 4/26/22.
//

#include "MenuTexts.h"

MenuTexts::MenuTexts()
{
    name.setString("Edward Eckelberry");
    name.setFont(Fonts::getFont());
    name.setPosition({0, 680});
    name.setFillColor(sf::Color::Red);

    className.setString("CS 03A, #37876");
    className.setFont(Fonts::getFont());
    className.setPosition({400, 680});
    className.setFillColor(sf::Color::Red);

    splash.setString("Spring (Splash) 2022");
    splash.setFont(Fonts::getFont());
    splash.setPosition({700, 680});
    splash.setFillColor(sf::Color::Red);

    exit.setString("Press ESC twice to exit");
    exit.setFont(Fonts::getFont());
    exit.setPosition({0, 0});
    exit.setFillColor(sf::Color::White);

    title.setString("The Winning Edge");
    title.setCharacterSize(50);
    title.setFont(Fonts::getFont());
    title.setPosition({280, 200});
    title.setFillColor(sf::Color::Red);

    rule.setString("Rules:\n It's a counting\n game so "
                   "suits\n don't matter.\n"
                   "The count\n is the sum\n of the points:\n"
                   "ranks 2-6: 1 point, \n"
                   "ranks 7-9: 0 points, \n"
                   "ranks 10, J, Q, K, A: -1 points. \n"
                   "The goal is to get the count right. Good luck!\n");
    rule.setFont(Fonts::getFont());
    rule.setPosition({0, 160});
    rule.setFillColor(sf::Color::Black);

}

sf::FloatRect MenuTexts::getGlobalBounds() const
{
    return title.getGlobalBounds(), exit.getGlobalBounds(), splash.getGlobalBounds(),
    className.getGlobalBounds(), name.getGlobalBounds();
}

void MenuTexts::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    window.draw(title);
    window.draw(exit);
    window.draw(splash);
    window.draw(className);
    window.draw(name);
}
