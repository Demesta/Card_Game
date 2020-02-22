#ifndef CPP_PROJECT__HOLDING_H_
#define CPP_PROJECT__HOLDING_H_


class Holding :public BlackCard
{
    int harvestValue;
};

class Stronghold :public Holding
{
    int honour;
    int money;
    int initialDefence;
};



#endif //CPP_PROJECT__HOLDING_H_
