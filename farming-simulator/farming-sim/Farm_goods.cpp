//#include "farm.h"
#include "farmer.h"
#include "farm_goods.h"
#include <iostream>
#include <string>

using namespace std;

// function to obtain the age of the goods
int Farm_goods::get_age() { return age; }

// function to obtain the sell value of the goods
int Farm_goods::get_sell_value()
{
    return sell_value;
};
// function to obtain the price of the goods
int Farm_goods::get_price()
{
    return price;
};

Farm_goods::Farm_goods(){};
Farm_goods::~Farm_goods(){};