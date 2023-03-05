//
// Created by Edward Eckelberry on 4/13/22.
//

#ifndef FINAL_PROJECT_MOUSEEVENTS_H
#define FINAL_PROJECT_MOUSEEVENTS_H
#include <SFML/Graphics.hpp>

template<class T>
class MouseEvents
{
public:
    static bool isHovered(sf::Shape &object, sf::RenderWindow& window);
    //returns true if clicked on text box
    static bool mouseClicked(const T& object, sf::RenderWindow& window);

    //returns true if the mouse hovers over the text box
    static bool hovered(const T& object, sf::RenderWindow& window, sf::Event event);
};

#include "MouseEvents.cpp"
#endif //FINAL_PROJECT_MOUSEEVENTS_H
