#ifndef SOYBEAN_H
#define SOYBEAN_H

//#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include "crops.h"
#include <iostream>
#include <string>

class Soybean : public Crops
{
protected:
public:
    Soybean();
    ~Soybean(){};
};

#endif