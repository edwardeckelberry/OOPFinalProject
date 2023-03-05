//
// Created by Edward Eckelberry on 4/25/22.
//

#ifndef FINAL_PROJECT_RESULT_H
#define FINAL_PROJECT_RESULT_H
#include "StatesEnum.h"
#include <SFML/Graphics.hpp>
#include "Fonts/Fonts.h"

class Result
{
private:
    sf::Text lose;
    sf::Text win;
    int resultValue;
    int resultInputValue;
    int result = 0;
public:
    Result();
    virtual void draw(sf::RenderTarget &window, sf::RenderStates states) const;
    int getResult();
    void setResult(int result);
    void compareValue( int resultInputValue);
};


#endif //FINAL_PROJECT_RESULT_H
