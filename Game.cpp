//
// Created by Edward Eckelberry on 4/13/22.
//

#include "Game.h"
Game::Game() = default;

int Game::run()
{
    sf::RenderWindow window(
            {1080, 720, 32},"Game");

    sf::SoundBuffer buffer;
    buffer.loadFromFile("audio/win.wav");
    sf::Sound sound;
    sound.setBuffer(buffer);
    bool hasPlayedSound = false;
//
//    sf::SoundBuffer boofer;
//    boofer.loadFromFile("audio/lose.ogg");
//    sf::Sound sound1;
//    sound1.setBuffer(boofer);

    sf::Texture background;
    background.loadFromFile("images/background.jpeg");
    sf::Sprite sprite;
    sprite.setTexture(background);
    sprite.setOrigin(0, 0);

    TextInput textInput;
    textInput.setCharacterSize(96);
    textInput.setFillColor(sf::Color::Black);
    textInput.setPosition({100, 600});

    Player player;

    result.setResult(player.deck.getPoints());


    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
            {
                window.close();
            }
            if(KeyBoardEvents::isEscape())
            {
                window.close();
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
            {

                std::string s = textInput.getString();
                int num = std::stoi(s);
                result.compareValue(num);

                while(sf::Keyboard::isKeyPressed(sf::Keyboard::Enter));

            }

            textInput.eventHandler(window, event);

        }

        window.clear();
        window.draw(sprite);
        window.draw(texts.text);
        window.draw(texts.outerRectangle);
        window.draw(texts.rectangle);
        window.draw(player);
        window.draw(textInput);
        if(result.getResult() == 1 )
        {
            window.draw(texts.win);
            if(!hasPlayedSound){
                sound.setVolume(20);
                sound.play();
                hasPlayedSound = true;
            }
        }
        else if(result.getResult() == 2)
        {
            window.draw(texts.lose);
//            sound1.play();
        }
        window.display();
    }

    return 0;
}