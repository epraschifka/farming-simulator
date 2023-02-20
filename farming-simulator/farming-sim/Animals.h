#ifndef ANIMALS_H
#define ANIMALS_H

#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include <iostream>
#include <string>

using namespace std;

class Animals : public Farm_goods
{
protected:
    int hunger;

public:
    void feed();
    void die();
    Animals();
    Animals(string _type, int _hunger);
    void set_age();
    int get_feed_status();
    void set_feed_status(int feed_status);
    string get_type();
};

#endif