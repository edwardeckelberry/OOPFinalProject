//
// Created by Edward Eckelberry on 4/13/22.
//

#include "Card.h"

Card::Card() : Card(ACE, CLUBS)
{

}

Card::Card(Ranks rank, Suits suit)
: rank(rank), suit(suit)
//        : Card(rank, suit)
{
    sprite.setTexture(Images::getImage(CARDS));
    textureRect.width = sprite.getGlobalBounds().width/13;
    textureRect.height = sprite.getGlobalBounds().height/4;
    textureRect.left = textureRect.width * rank;
    textureRect.top = textureRect.height * suit;

    sprite.setTextureRect(textureRect);
}

bool operator<(const Card &lhs, const Card &rhs)
{
    return lhs.rank < rhs.rank;
}

bool operator>(const Card &lhs, const Card &rhs)
{
    return lhs.rank > rhs.rank;
}

bool operator==(const Card &lhs, const Card &rhs)
{
    return lhs.rank == rhs.rank;
}

int Card::getSuit() const
{
    return suit;
}

Ranks Card::getRank() const
{
    return rank;
}

std::ostream &operator<<(std::ostream &out, const Card &card)
{
    return out << card.getRankString() << " of " << card.getSuitString();
}

std::string Card::getRankString() const
{
    switch(rank)
    {
        case ACE: return "Ace";
        case TWO: return "Two";
        case THREE: return "Three";
        case FOUR: return "Four";
        case FIVE: return "Five";
        case SIX: return "Six";
        case SEVEN: return "Seven";
        case EIGHT: return "Eight";
        case NINE: return "Nine";
        case TEN: return "Ten";
        case JACK: return "Jack";
        case QUEEN: return "Queen";
        case KING: return "King";

    }

}

std::string Card::getSuitString() const
{
    switch(suit)
    {
        case HEARTS: return "Hearts";
        case CLUBS: return "Clubs";
        case SPADES: return "Spades";
        case DIAMONDS: return "Diamonds";
    }
}
//
//Card::Card(Ranks rank, Suits suit)
//        :rank(rank), suit(suit)
//{
//
//}
//
//SFMLCard::SFMLCard(Ranks rank, Suits suit)
//        : Card(rank, suit)
//{
//    sprite.setTexture(Images::getImage(CARDS));
//    textureRect.width = sprite.getGlobalBounds().width/13;
//    textureRect.height = sprite.getGlobalBounds().height/4;
//    textureRect.left = textureRect.width * rank;
//    textureRect.top = textureRect.height * suit;
//
//    sprite.setTextureRect(textureRect);
//}

void Card::draw(sf::RenderTarget &window, sf::RenderStates state) const
{
    window.draw(sprite);
}

sf::FloatRect Card::getGlobalBounds() const
{
    return sprite.getGlobalBounds();
}

void Card::setPosition(float x, float y)
{
    sprite.setPosition(x, y);
}