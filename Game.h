//
// Created by Edward Eckelberry on 4/13/22.
//

#ifndef FINAL_PROJECT_GAME_H
#define FINAL_PROJECT_GAME_H
#include <SFML/Graphics.hpp>
#include "KeyBoardEvents.h"
#include "Player.h"
#include "TextInput.h"
#include "Deck.h"
#include "Result.h"
#include <string>
#include <iostream>
#include "GameTexts.h"
#include <SFML/Audio.hpp>
#include "MouseEvents.h"

class Game {
private:
    Deck deck;
    Result result;
    GameTexts texts;
public:
    Game();
    //potential bug: void run() is no longer static so that points isn't static
    int run();

};

#endif //FINAL_PROJECT_GAME_H
