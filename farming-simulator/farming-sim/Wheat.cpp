#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include "wheat.h"
#include <iostream>
#include <string>

// constructor to set up initial values
Wheat::Wheat()
{
    max_age = 1;
    hydration = 50;
    type = "wheat";
    sell_value = 100;
    price = 50;
};