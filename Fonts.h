//
// Created by Edward Eckelberry on 4/13/22.
//

#ifndef FINAL_PROJECT_FONTS_H
#define FINAL_PROJECT_FONTS_H
#include <SFML/Graphics.hpp>
#include <map>
#include "FontEnum.h"
class Fonts
{
private:
    static sf::Font font;
    static bool load;
    static void loadFont();
public:
    static sf::Font& getFont();
private:
    static std::map<FontEnum, sf::Font> fonts;
    static std::string getFontPath(FontEnum font);
    static void loadFont(FontEnum font);
public:
    static sf::Font& getFont(FontEnum font);
};


#endif //FINAL_PROJECT_FONTS_H
