#include "farmer.h"
#include "farm.h"
#include <iostream>
#include <string>
#include "crops.h"

Farmer::Farmer()
{
    money = 1000;
    energy = 100;
};

// return current money
int Farmer::get_money()
{
    return money;
}
// change money
void Farmer::set_money(int _money)
{
    money = _money;
}
// win function
void Farmer::win()
{
    if (money >= 5000)
    {
        cout << "CONGRATULATIONS!! YOU WIN THE FARM IS SUCCESSFUL" << endl;
    }
}

// function will remove energy when the user commits a task
void Farmer::do_task()
{
    energy = energy - 10;
}

// restore energy, change time
void Farmer::sleep()
{
    energy = 100;
}

Farmer::~Farmer()
{
    // delete [] animal_array;
    // delete [] produce_array;
}