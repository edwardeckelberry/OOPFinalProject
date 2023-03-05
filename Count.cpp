//
// Created by Edward Eckelberry on 4/13/22.
//

#include "Count.h"

int Count::getRankScore(Ranks rank)
{
    switch(rank)
    {
        case ACE: return -1;
        case TWO: return 1;
        case THREE: return 1;
        case FOUR: return 1;
        case FIVE: return 1;
        case SIX: return 1;
        case SEVEN: return 0;
        case EIGHT: return 0;
        case NINE: return 0;
        case TEN: return -1;
        case JACK: return -1;
        case QUEEN: return -1;
        case KING: return -1;

    }
}
