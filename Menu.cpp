//
// Created by Edward Eckelberry on 4/13/22.
//

#include "Menu.h"


Menu::Menu() = default;

void Menu::run()
{
    sf::Sprite sprite;
    sf::RenderWindow window({1080, 720, 32}, "Menu");

    sf::Texture background;
    background.loadFromFile("images/menuBackground.jpeg");
    sf::Sprite backgroundSprite;
    backgroundSprite.setTexture(background);
    backgroundSprite.setOrigin(0, 0);

    sf::Vector2f windowSize;
    windowSize.x = sprite.getGlobalBounds().width;
    windowSize.y = sprite.getGlobalBounds().height;

    MenuButton button;

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();
            if(KeyBoardEvents::isEscape())
            {
                window.close();
            }
            if(MouseEvents<MenuButton>::mouseClicked(button, window))
            {
                window.close();
            }
            if(MouseEvents<MenuButton>::hovered(button, window, event))
            {
                button.rectangle.setFillColor(sf::Color::Black);
            }
            else
                button.rectangle.setFillColor(sf::Color::Red);
        }

        window.clear();
        window.draw(backgroundSprite);
        window.draw(texts.rule);
        window.draw(button);
        window.draw(texts.name);
        window.draw(texts.className);
        window.draw(texts.splash);
        window.draw(texts.exit);
        window.draw(texts.title);
        window.display();
    }

}