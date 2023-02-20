#include "crops.h"
#include <string>
#include <iostream>
#include "wheat.h"
#include "corn.h"
#include "soybean.h"

using namespace std;

// constructor
Crops::Crops() : Farm_goods()
{
    hydration = 100;
    type = "";
    age = 1;
    sell_value = 0;
    price = 0;
}
// contructor
Crops::Crops(string _type, int _hydration) : Farm_goods()
{
    hydration = _hydration;
    type = _type;
    age = 1;
}

// crops hydration function works differently to animals due to real life.
void Crops::feed()
{
    hydration = hydration + 25;
    if (hydration > 100)
    {
        hydration = 100;
    }
};
// return the hydration value to determine if the crop needs to be fed(watered)
int Crops::get_feed_status()
{
    return hydration;
};

// sets the hydration value
void Crops::set_feed_status(int new_hydration)
{
    hydration = new_hydration;
}

// function to increment the age as each day passes
void Crops::set_age()
{
    age = age + 1;
    // cout << "animals set age" << endl;
}

// function to return type to allow polymorphism in buy/sell functions
string Crops::get_type()
{
    return type;
};