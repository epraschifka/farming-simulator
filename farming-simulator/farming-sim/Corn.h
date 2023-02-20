#ifndef CORN_H
#define CORN_H

//#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include "crops.h"
#include <iostream>
#include <string>

class Corn : public Crops
{
protected:
public:
    Corn();
    ~Corn(){};
};

#endif