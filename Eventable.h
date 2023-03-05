//
// Created by Edward Eckelberry on 4/21/22.
//

#ifndef FINAL_PROJECT_EVENTABLE_H
#define FINAL_PROJECT_EVENTABLE_H
#include "SFML/Graphics.hpp"

class Eventable //polymorphic classes end with -able
{
public:
    virtual void eventHandler(sf::RenderWindow& window, sf::Event event) = 0;
    //the = 0 means it makes it pure virtual function
};


#endif //FINAL_PROJECT_EVENTABLE_H
