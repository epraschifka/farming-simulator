#ifndef SHEEPS_H
#define SHEEPS_H

#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include "animals.h"
#include <iostream>
#include <string>

class Sheeps : public Animals
{
protected:
public:
    Sheeps();

    ~Sheeps(){};
};

#endif