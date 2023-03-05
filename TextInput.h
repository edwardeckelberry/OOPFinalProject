//
// Created by Edward Eckelberry on 4/21/22.
//

#ifndef FINAL_PROJECT_TEXTINPUT_H
#define FINAL_PROJECT_TEXTINPUT_H
#include <SFML/Graphics.hpp>
#include "Eventable.h"
#include "Fonts/Fonts.h"
class TextInput : public sf::Text, public Eventable
{
public:
    TextInput();
    TextInput(FontEnum font);
    virtual void eventHandler(sf::RenderWindow &window, sf::Event event) override;
};


#endif //FINAL_PROJECT_TEXTINPUT_H
