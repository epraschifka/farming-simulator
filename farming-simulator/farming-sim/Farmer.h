#ifndef FARMER_H
#define FARMER_H

#include <iostream>
#include <string>
#include "farm.h"
using namespace std;

/* class of farmer, it has functions and data members to keep track of the
    users actions via energy and allows the user to buy and sell products
    from the farm to make money; ie win the game
    */

class Farmer : public Farm
{
protected:
    int energy;
    int money;

public:
    int get_money();
    void set_money(int _money);
    void do_task();
    void win();
    void sleep();
    Farmer();
    ~Farmer();
};
#endif