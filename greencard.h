#include classes.h

class GreenCard public: Card
{
    int attackBonus;
    int defenceBonus;
    int minimumHonour;
    string cardText;
    int effectCost;
    int durability;

    int effectBonus();

};

class Follower public: GreenCard
{

};

class Footsoldier public: Follower
{

};

class Archer public: Follower
{

};

class Cavalry public: Follower
{

};

class Bushido public: Follower
{

};

class Sieger public: Follower
{

};

class Atekebune public: Follower
{

};

class Item public: GreenCard
{

};

class Katana public: Item
{

};

class Spear public: Item
{

};

class Bow public: Item
{

};

class Ninjato public: Item
{

};

class Wakizashi public: Item
{

};