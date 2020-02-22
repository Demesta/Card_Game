#include "Card.h"

class GreenCard : public Card
{
    int attackBonus;
    int defenceBonus;
    int minimumHonour;
    string cardText;
    int effectCost;
    int durability;

    int effectBonus();

};
