#ifndef PIGS_H
#define PIGS_H

#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include "animals.h"
#include <iostream>
#include <string>

class Pigs : public Animals
{
protected:
public:
    Pigs();
    ~Pigs(){};
};

#endif