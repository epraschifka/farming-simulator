#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include <iostream>
#include <string>
#include "corn.h"

using namespace std;

// constructor to set up initial values
Corn::Corn()
{
    max_age = 2;
    hydration = 50;
    sell_value = 175;
    type = "corn";
    sell_value = 175;
    price = 100;
};
