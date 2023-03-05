//
// Created by Edward Eckelberry on 4/13/22.
//

#ifndef FINAL_PROJECT_MOUSEEVENTS_CPP
#define FINAL_PROJECT_MOUSEEVENTS_CPP
#include "MouseEvents.h"

template<class T>
bool MouseEvents<T>::isHovered(sf::Shape &object, sf::RenderWindow &window)
{
    sf::Vector2f mpos = (sf::Vector2f) sf::Mouse::getPosition(window);
    return object.getGlobalBounds().contains(mpos);
}

template<class T>
bool MouseEvents<T>::mouseClicked(const T &object, sf::RenderWindow &window)
{
    sf::Vector2f mpos = (sf::Vector2f) sf::Mouse::getPosition(window);
    sf::FloatRect bounds = object.getGlobalBounds();

    if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        if(bounds.contains(mpos))
        {
            return true;
        }
    }
    return false;
}

template<class T>
bool MouseEvents<T>::hovered(const T &object, sf::RenderWindow &window, sf::Event event)
{
    sf::Vector2f mpos = (sf::Vector2f) sf::Mouse::getPosition(window);
    sf::FloatRect bounds = object.getGlobalBounds();

    if(bounds.contains(mpos))
    {
        return true;
    }
    return false;
}

#endif
