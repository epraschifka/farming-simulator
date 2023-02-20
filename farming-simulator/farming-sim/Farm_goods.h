#ifndef PRODUCE_H
#define PRODUCE_H
//#include "farm.h"
//#include "farmer.h"
#include <iostream>
#include <string>

using namespace std;

class Farm_goods {
    protected:
    int age;
    int sell_value;
    int price;
    string type;
    public:
    int max_age;
    int get_age();
    virtual void feed() = 0;
    virtual int get_feed_status() = 0;
    int get_sell_value();
    int get_price();
    Farm_goods();
    ~Farm_goods();
};


#endif