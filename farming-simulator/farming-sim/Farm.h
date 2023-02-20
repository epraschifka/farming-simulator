#ifndef FARM_H
#define FARM_H

#include <string>
#include <iostream>
class Animals;
// #include "farmer.h"
#include "farm_goods.h"
#include "crops.h"
class Crops;
class Cows;
class Sheeps;
class Pigs;
class Wheat;
class Soybean;
class Corn;

using namespace std;

/* this is the parent class that will hold the dyamically allocated arrays of the animals and crops
also contains the control for the user to win the game. 
the time/amount of days that have passed will be stored in this class.
it will contain functions to print the owned animals/crops of the user
*/
class Farm {
    protected:
        int time;
        int bank_account;
        int count_cows;
        int count_pigs;
        int count_sheeps;
        int count_corn;
        int count_wheat;
        int count_soybean;

    public:
        int cow_max_age;
        int sheep_max_age;
        int pig_max_age;
        int corn_max_age;
        int wheat_max_age;
        int soybean_max_age;
        Animals *cow_array_old;
        Animals *cow_array_new;
        Animals *sheep_array_old;
        Animals *sheep_array_new;
        Animals *pig_array_old;
        Animals *pig_array_new;
        Crops *wheat_array_old;
        Crops *wheat_array_new;
        Crops* soybean_array_old;
        Crops* soybean_array_new;
        Crops* corn_array_old;
        Crops* corn_array_new;
        
      
        void set_time(int new_time);
        int get_time();
        void increase_age();
        void decrease_hunger();
      
        Farm();
        ~Farm();

    
        void buy_goods(Animals object);
        void buy_goods(Crops object);
        void sell_goods(Animals object);
        void sell_goods(Crops object);
        int get_cow_count();
        int get_sheeps_count();
        int get_pigs_count();
        int get_corn_count();
        int get_soybean_count();
        int get_wheat_count();
        void feed_cows();
        void feed_sheeps();
        void feed_pigs();
        void feed_corn();
        void feed_soybean();
        void feed_wheat();
        
        
};

#endif
