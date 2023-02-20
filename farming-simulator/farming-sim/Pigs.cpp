#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include "pigs.h"
#include "animals.h"
#include <iostream>
#include <string>

// constructor to set up initial values
Pigs::Pigs()
{
    type = "pigs";
    age = 1;
    hunger = 50;
    sell_value = 3000;
    price = 1500;
    max_age = 3;
}