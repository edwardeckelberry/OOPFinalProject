//
// Created by Edward Eckelberry on 4/15/22.
//

#ifndef FINAL_PROJECT_IMAGES_H
#define FINAL_PROJECT_IMAGES_H
#include <map>
//pretty much maps changes the index name to whatever you want, called a key/ value pairs
//in Python, they call it a dictionary
#include "ImageEnum.h"
#include <SFML/Graphics.hpp>
#include <string>
class Images
{
private:
    //this is a template class
    //static means its created once and accesssed through the class itself
    static std::map<ImageEnum, sf::Texture> images;
    static void loadImage(ImageEnum image);
    static std::string getImagePath(ImageEnum image);
public:
    static sf::Texture& getImage(ImageEnum image);

};

#endif //FINAL_PROJECT_IMAGES_H
