#ifndef WHEAT_H
#define WHEAT_H

//#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include "crops.h"
#include <iostream>
#include <string>

class Wheat : public Crops
{
protected:
public:
    Wheat();
    ~Wheat(){};
};

#endif