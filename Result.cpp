//
// Created by Edward Eckelberry on 4/25/22.
//

#include "Result.h"
//do switch case of winning and losing here
Result::Result()
{
    win.setString("You win!");
    win.setCharacterSize(100);
    win.setFont(Fonts::getFont());
    win.setPosition({300, 300});

    lose.setString("You lose!");
    lose.setCharacterSize(100);
    lose.setFont(Fonts::getFont());
    lose.setPosition({300, 300});
}

void Result::draw(sf::RenderTarget &window, sf::RenderStates states) const
{

    switch(result)
    {
        case WIN: return window.draw(win);
        case LOSE: return window.draw(lose);
    }
}

int Result::getResult()
{
    return result;
}

void Result::setResult(int input)
{
    resultValue = input;
}

void Result::compareValue( int resultInputValue)
{
    if(resultInputValue == resultValue)
    {
        result = 1;

    }
    else
        result = 2;

}




