//
// Created by Edward Eckelberry on 4/13/22.
//

#include "Fonts.h"

sf::Font Fonts::font;
bool Fonts::load = false;

void Fonts::loadFont()
{
    if(!load)
    {
        if(!font.loadFromFile("Fonts/OpenSans-Bold.ttf"))
            exit(1);
        load = true;
    }
}

sf::Font &Fonts::getFont()
{
    loadFont();
    return font;
}
std::map<FontEnum, sf::Font> Fonts::fonts;
std::string Fonts::getFontPath(FontEnum font)
{
    switch(font)
    {
        case OPEN_SANS_BOLD: return "Fonts/OpenSans-Bold.ttf";
    }
    return std::string();
}

void Fonts::loadFont(FontEnum font)
{
    fonts[font].loadFromFile(getFontPath(font));
}

sf::Font &Fonts::getFont(FontEnum font)
{
    loadFont(font);
    return fonts[font];
}