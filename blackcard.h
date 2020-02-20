#include classes.h

class BlackCard public: Card
{
    bool isReleaved;
};

class Personality public: BlackCard
{
    int attack;
    int defence;
    int honour;
    bool isDead;
};

class Attacker public: Personality
{

};

class Defender public: Personality
{

};

class Champion public: Personality
{

};

class Chancellor public: Personality
{

};

class Shogun public: Personality
{

};

class Holding public: BlackCard
{
    int harvestValue;

    void subHolding(& Holding)=0;
    void upperHolding(& Holding)=0;
};

class Plain public: Holding
{

};

class Mine public: Holding
{
    void subHolding(& Holding) override;
    void upperHolding(& Holding) override;
};

class Gold_Mine public: Holding
{
    void subHolding(& Holding) override;
    void upperHolding(& Holding) override;
};

class Crystal_Mine public: Holding
{
    void subHolding(& Holding) override;
    void upperHolding(& Holding) override;
};

class Farmland public: Holding
{

};

class Gift_AND_Favour public: Holding
{

};

class Stronghold public: BlackCard
{
    int honour;
    int money;
    int initialDefence;
};
