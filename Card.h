//
// Created by Edward Eckelberry on 4/13/22.
//

#ifndef FINAL_PROJECT_CARD_H
#define FINAL_PROJECT_CARD_H
#include <SFML/Graphics.hpp>
#include "Ranks.h"
#include "Suits.h"
#include <iostream>
#include "Images.h"

class Card : public sf::Drawable
{
private:
    Ranks rank;
    Suits suit;
    std::string getRankString() const;
    std::string getSuitString() const;
public:
    Card();
    Card(Ranks rank, Suits suit);
    friend bool operator<(const Card& lhs, const Card& rhs);
    friend bool operator>(const Card& lhs, const Card& rhs);
    friend bool operator==(const Card& lhs, const Card& rhs);
    Ranks getRank() const;
    int getSuit() const;

    int getValue() const;


    friend std::ostream& operator<<(std::ostream& out,
            const Card& card);
private:
    sf::Sprite sprite;
    sf::IntRect textureRect;
public:
//    SFMLCard();
//    SFMLCard(Ranks rank, Suits suit);
    virtual void draw(sf::RenderTarget& window, sf::RenderStates state) const;
    sf::FloatRect getGlobalBounds() const;
    void setPosition(float x, float y);
};
#endif //FINAL_PROJECT_CARD_H
