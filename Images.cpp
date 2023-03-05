//
// Created by Edward Eckelberry on 4/5/22.
//
#include "Images.h"
std::map<ImageEnum, sf::Texture> Images::images;

void Images::loadImage(ImageEnum image)
{
    images[image].loadFromFile(getImagePath(image));
}

std::string Images::getImagePath(ImageEnum image)
{
    switch(image)
    {
        case CARDS: return "images/cards.png";
    }
}

sf::Texture &Images::getImage(ImageEnum image)
{
    loadImage(image);
    return images[image];
}