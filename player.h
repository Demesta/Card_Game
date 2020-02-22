#include classes.h
#include blackcard.h
#include greencard.h

class Player
{
    int honour;
    int numberOfProvinces;

    list<GreenCard> fateDeck;
    list<BlackCard> dynastyDeck;
    list<GreenCard> hand;
    list<Holding> holdings;
    list<Personality> army;

    DeckBuilder deck;
};
