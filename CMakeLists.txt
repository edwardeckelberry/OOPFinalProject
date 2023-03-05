cmake_minimum_required(VERSION 3.21)
project(Final_Project)

set(CMAKE_CXX_STANDARD 14)

add_executable(Final_Project main.cpp Game.cpp Game.h Menu.cpp Menu.h Fonts/Fonts.cpp Fonts/Fonts.h MouseEvents.cpp MouseEvents.h Card.cpp Card.h Count.cpp Count.h Deck.cpp Deck.h MenuButton.cpp MenuButton.h KeyBoardEvents.cpp KeyBoardEvents.h Ranks.h Suits.h Images.cpp Images.h ImageEnum.h Player.cpp Player.h TextInput.cpp TextInput.h Eventable.h Fonts/FontEnum.h StatesEnum.h Result.cpp Result.h LinkedList.cpp LinkedList.h Node.h GameTexts.cpp GameTexts.h MenuTexts.cpp MenuTexts.h)
target_link_libraries(Final_Project sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)