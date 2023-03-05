//
// Created by Edward Eckelberry on 4/21/22.
//

#include "TextInput.h"
void TextInput::eventHandler(sf::RenderWindow &window, sf::Event event)
{

    if(sf::Event::TextEntered == event.type)
    {
        std::string s = sf::Text::getString(); //to concatenate strings
        s += static_cast<char>(event.text.unicode);
        sf::Text::setString(s);
    }

}

TextInput::TextInput() : TextInput(OPEN_SANS_BOLD)
{

}

TextInput::TextInput(FontEnum font)
{
    sf::Text::setFont(Fonts::getFont(font));
}


