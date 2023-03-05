# OOPFinalProject

TL;DR This is a card counting game using the SFML library.

This was my final project for when I took an object-oriented programming class in C++. While on my computer it does work, unfortunately the parts of the code that are required to be in files couldn't be kept in their files because of the way GitHub works. I coded all of this in CLion, so if one tries to run it on VS Code, there are going to be a LOT of issues. This project used a singley linked list that I created by myself. The one function I am confident is unusable is the search function. 

Now to understand the code, it is comprised of two windows:
1. Displaying a menu with a pressable button that changes color, as well as the rules on how to card count. When the button is pressed, it closes the window.
2. Displays a mock game of Blackjack with all cards necessary to count with facing up. There is a text box that has a question above it asking, "What's the count?" To which the user has to input a number, negative or positive. If the number is correct, "You Win!" pops up on the screen then activates win.wav. Else, "You Lose!" pops up and no sound is played. Reason being that the lose.ogg isn't a .wav file (SFML never bought the rights to play .mp3 or anything else, so I was stuck with .wav files) and my code couldn't play the sound without having it loop itself an infinitesimal amount of times, since the sound is playing in a double while loop, with no condition telling it to stop. It wasn't until later on how I learned to implement sound on SFML correctly, but never fixed it.

If you want to run the game on your computer:
1. Download CLion and MinGW.
2. Certain classes, pictures, and fonts are needed to be put in directories in order to work. I will list the names of each directory and what files should be in each one:

audio:
lose.ogg (isn't used but never deleted it)
win.wav

Fonts:
FontEnum.h
Fonts.cpp
Fonts.h
OpenSans-Bold.ttf

images:
background.jpeg
cards.png
menuBackground.jpeg



https://user-images.githubusercontent.com/89359158/222950419-9ea90518-ae49-4c16-bb5f-f464be2c6ff6.mov

