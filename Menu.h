//
// Created by Edward Eckelberry on 4/13/22.
//

#ifndef FINAL_PROJECT_MENU_H
#define FINAL_PROJECT_MENU_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Fonts/Fonts.h"
#include "KeyBoardEvents.h"
#include "MenuButton.h"
#include "MouseEvents.h"
#include "MenuTexts.h"
class Menu {
private:
    MenuTexts texts;
public:

    Menu();

    void run();
};

#endif //FINAL_PROJECT_MENU_H
