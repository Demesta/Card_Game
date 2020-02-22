#include <fstream>
#include <cstdio>
#include <iostream>
#include <ctime>
#include <list>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

class GameBoard
{
    list<Player> players_list;
    list<Card> cards_list;

    void deckbuilder();
    void printGameStatistics();
    void gameplay();
};




