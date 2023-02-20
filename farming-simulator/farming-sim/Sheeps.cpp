#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include "sheeps.h"
#include "animals.h"
#include <iostream>
#include <string>

// constructor to set up initial values
Sheeps::Sheeps()
{
    max_age = 4;
    type = "sheeps";
    age = 1;
    hunger = 50;
    sell_value = 1500;
    price = 1500;
}
