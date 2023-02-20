#include "animals.h"
#include <string>
#include <iostream>
#include "cows.h"
#include "sheeps.h"
#include "pigs.h"

using namespace std;

// constructor to set up initial values
Animals::Animals() : Farm_goods()
{
    hunger = 100;
    type = "";
    age = 1;
    sell_value = 0;
    price = 0;
}
// constructor to set up initial values
Animals::Animals(string _type, int _hunger) : Farm_goods()
{
    hunger = _hunger;
    type = _type;
    age = 1;
}

// function to feed the animals and return hunger to full;
void Animals::feed()
{
    hunger = 100;
}

// return the hunger value to determine if the animal needs to be fed
int Animals::get_feed_status()
{
    return hunger;
};

void Animals::set_feed_status(int feed_status)
{
    hunger = feed_status;
}
// function to increment the age as each day passes
void Animals::set_age()
{
    age = age + 1;
}

// function to return type to allow polymorphism in buy/sell functions
string Animals::get_type()
{
    return type;
};
