#ifndef COWS_H
#define COWS_H

#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include "animals.h"
#include <iostream>
#include <string>

class Cows : public Animals
{
protected:
public:
    Cows();
    ~Cows(){};
};

#endif