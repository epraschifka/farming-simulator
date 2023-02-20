#include "farm.h"

#include <iostream>
#include <string>

#include "animals.h"
#include "corn.h"
#include "cows.h"
#include "crops.h"
#include "farm_goods.h"
#include "pigs.h"
#include "sheeps.h"
#include "soybean.h"
#include "wheat.h"

using namespace std;

Farm::Farm()
{
  cow_max_age = 3;
  sheep_max_age = 2;
  pig_max_age = 1;
  corn_max_age = 1;
  wheat_max_age = 1;
  soybean_max_age = 1;
  time = 1;
  bank_account = 500;
  cow_array_old = new Animals[0];
  count_cows = 0;
  count_sheeps = 0;
  count_pigs = 0;
  count_wheat = 0;
  count_soybean = 0;
  count_corn = 0;
  pig_array_old = new Animals[0];
  sheep_array_old = new Animals[0];
  wheat_array_old = new Crops[0];
  soybean_array_old = new Crops[0];
  corn_array_old = new Crops[0];
};

// function to access what day it is
int Farm::get_time() { return time; }

// function to set time
void Farm::set_time(int new_time) { time = new_time; }

// function that will buy the class of goods the user wants to purchase and
// dynamically allocate a new array to fit in the new object, and add the object
// to the array
void Farm::buy_goods(Animals object)
{
  string type_cows = "cows";
  string type_sheeps = "sheeps";
  string type_pigs = "pigs";
  // if statements to use polymorphism to determine which animal is being bought
  if (type_cows.compare(object.get_type()) == 0)
  {
    // increase cow count and allocate space for new cow
    count_cows++;
    cow_array_new = new Cows[count_cows];
    // copy old cow array to new space
    for (int i = 0; i < count_cows - 1; i++)
    {
      cow_array_new[i] = cow_array_old[i];
    }
    // add new object into the new array
    cow_array_new[count_cows - 1] = object;
    // delete old array to avoid memory leaks
    delete[] cow_array_old;
    // allocate new space for old array and have it = new array
    cow_array_old = new Cows[count_cows];
    cow_array_old = cow_array_new;
  }

  // same for pigs
  if (type_pigs.compare(object.get_type()) == 0)
  {
    count_pigs++;
    pig_array_new = new Pigs[count_pigs];
    for (int i = 0; i < count_pigs - 1; i++)
    {
      pig_array_new[i] = pig_array_old[i];
    }

    pig_array_new[count_pigs - 1] = object;
    delete[] pig_array_old;
    pig_array_old = new Pigs[count_pigs];
    pig_array_old = pig_array_new;
  }
  // check for sheep
  if (type_sheeps.compare(object.get_type()) == 0)
  {
    count_sheeps++;
    sheep_array_new = new Sheeps[count_sheeps];
    for (int i = 0; i < count_sheeps - 1; i++)
    {
      sheep_array_new[i] = sheep_array_old[i];
    }
    sheep_array_new[count_sheeps - 1] = object;
    delete[] sheep_array_old;
    sheep_array_old = new Sheeps[count_sheeps];
    sheep_array_old = sheep_array_new;
  }
}
// same as above but for crops
void Farm::buy_goods(Crops object)
{
  string type_corn = "corn";
  string type_soybean = "soybean";
  string type_wheat = "wheat";
  // check for corn
  if (type_corn.compare(object.get_type()) == 0)
  {
    count_corn++;
    corn_array_new = new Corn[count_corn];
    for (int i = 0; i < count_cows - 1; i++)
    {
      corn_array_new[i] = corn_array_old[i];
    }
    corn_array_new[count_corn - 1] = object;
    delete[] corn_array_old;
    corn_array_old = new Corn[count_corn];
    corn_array_old = corn_array_new;
  }
  // check for soybean
  if (type_soybean.compare(object.get_type()) == 0)
  {
    count_soybean++;
    soybean_array_new = new Soybean[count_soybean];
    for (int i = 0; i < count_soybean - 1; i++)
    {
      soybean_array_new[i] = soybean_array_old[i];
    }

    soybean_array_new[count_soybean - 1] = object;
    delete[] soybean_array_old;
    soybean_array_old = new Soybean[count_soybean];
    soybean_array_old = soybean_array_new;
  }
  // check for wheat
  if (type_wheat.compare(object.get_type()) == 0)
  {
    count_wheat++;
    wheat_array_new = new Wheat[count_wheat];
    for (int i = 0; i < count_wheat - 1; i++)
    {
      wheat_array_new[i] = wheat_array_old[i];
    }
    wheat_array_new[count_wheat - 1] = object;
    delete[] wheat_array_old;
    wheat_array_old = new Wheat[count_wheat];
    wheat_array_old = wheat_array_new;
  }
}

// will increase the age of all the owned farm_goods
void Farm::increase_age()
{
  for (int i = 0; i < count_cows; i++)
  {
    cow_array_old[i].set_age();
  }
  for (int i = 0; i < count_pigs; i++)
  {
    pig_array_old[i].set_age();
  }
  for (int i = 0; i < count_sheeps; i++)
  {
    sheep_array_old[i].set_age();
  }
  for (int i = 0; i < count_corn; i++)
  {
    corn_array_old[i].set_age();
  }
  for (int i = 0; i < count_soybean; i++)
  {
    soybean_array_old[i].set_age();
  }
  for (int i = 0; i < count_sheeps; i++)
  {
    wheat_array_old[i].set_age();
  }
}

void Farm::decrease_hunger()
{
  for (int i = 0; i < count_cows; i++)
  {
    if (cow_array_new[i].get_feed_status() == 100)
    {
      cow_array_new[i].set_age();
    }
    if (cow_array_new[i].get_age() >= cow_max_age)
    {
      cout << "You hav cow ready to be sold!\n";
    }
    cow_array_new[i].set_feed_status(cow_array_new[i].get_feed_status() - 20);
  }
  for (int i = 0; i < count_sheeps; i++)
  {
    if (sheep_array_new[i].get_feed_status() == 100)
    {
      sheep_array_new[i].set_age();
    }
    if (sheep_array_new[i].get_age() >= sheep_max_age)
    {
      cout << "You have a sheep ready to be sold!\n";
    }
    sheep_array_new[i].set_feed_status(sheep_array_new[i].get_feed_status() - 20);
  }
  for (int i = 0; i < count_pigs; i++)
  {
    if (pig_array_new[i].get_feed_status() == 100)
    {
      pig_array_new[i].set_age();
    }
    if (pig_array_new[i].get_age() >= pig_max_age)
    {
      cout << "You have a pig ready to be sold!\n";
    }
    pig_array_new[i].set_feed_status(pig_array_new[i].get_feed_status() - 20);
  }
  for (int i = 0; i < count_wheat; i++)
  {
    if (wheat_array_new[i].get_feed_status() == 100)
    {
      wheat_array_new[i].set_age();
    }
    if (wheat_array_new[i].get_age() >= wheat_max_age)
    {
      cout << "You have wheat ready to be sold!\n";
    }
    wheat_array_new[i].set_feed_status(wheat_array_new[i].get_feed_status() - 20);
  }
  for (int i = 0; i < count_soybean; i++)
  {
    if (soybean_array_new[i].get_feed_status() == 100)
    {
      soybean_array_new[i].set_age();
    }
    if (soybean_array_new[i].get_age() >= soybean_max_age)
    {
      cout << "You have soybeans ready to be sold!\n";
    }
    soybean_array_new[i].set_feed_status(soybean_array_new[i].get_feed_status() - 20);
  }
  for (int i = 0; i < count_corn; i++)
  {
    if (corn_array_new[i].get_feed_status() == 100)
    {
      corn_array_new[i].set_age();
    }
    if (corn_array_new[i].get_age() >= corn_max_age)
    {
      cout << "You have corn ready to be sold!\n";
    }
    corn_array_new[i].set_feed_status(corn_array_new[i].get_feed_status() - 20);
  }
}

// functions to return the current count of owned goods
int Farm::get_cow_count() { return count_cows; }
int Farm::get_sheeps_count() { return count_sheeps; }
int Farm::get_pigs_count() { return count_pigs; }
int Farm::get_corn_count() { return count_corn; }
int Farm::get_soybean_count() { return count_soybean; }
int Farm::get_wheat_count() { return count_wheat; }

// function to sell an owned animal object
void Farm::sell_goods(Animals object)
{
  string type_cows = "cows";
  string type_sheeps = "sheeps";
  string type_pigs = "pigs";
  // check if cows
  if (type_cows.compare(object.get_type()) == 0)
  {
    // decrease cow count
    count_cows--;
    // allocate new space for after sold object
    cow_array_new = new Cows[count_cows];
    // copy old array across minus the first object
    for (int i = 0; i < count_cows; i++)
    {
      cow_array_new[i] = cow_array_old[i + 1];
    }
    // delete old array to avoid memory leak
    delete[] cow_array_old;
    // allocate new space and copy
    cow_array_old = new Cows[count_cows];
    cow_array_old = cow_array_new;
  }
  // check for sheep and do the same
  if (type_sheeps.compare(object.get_type()) == 0)
  {
    count_sheeps--;
    sheep_array_new = new Sheeps[count_sheeps];
    for (int i = 0; i < count_sheeps; i++)
    {
      sheep_array_new[i] = sheep_array_old[i + 1];
    }
    delete[] sheep_array_old;
    sheep_array_old = new Sheeps[count_sheeps];
    sheep_array_old = sheep_array_new;
  }
  // check for pigs and do the same
  if (type_pigs.compare(object.get_type()) == 0)
  {
    count_pigs--;
    pig_array_new = new Pigs[count_pigs];
    for (int i = 0; i < count_pigs; i++)
    {
      pig_array_new[i] = pig_array_old[i + 1];
    }
    delete[] pig_array_old;
    pig_array_old = new Pigs[count_pigs];
    pig_array_old = pig_array_new;
  }
}
// the exact same as above but for Crops
void Farm::sell_goods(Crops object)
{
  string type_corn = "corn";
  string type_soybean = "soybean";
  string type_wheat = "wheat";

  if (type_corn.compare(object.get_type()) == 0)
  {
    count_corn--;
    corn_array_new = new Corn[count_corn];
    for (int i = 0; i < count_corn; i++)
    {
      corn_array_new[i] = corn_array_old[i + 1];
    }
    delete[] corn_array_old;
    corn_array_old = new Corn[count_corn];
    corn_array_old = corn_array_new;
  }
  // check soybean
  if (type_soybean.compare(object.get_type()) == 0)
  {
    count_soybean--;
    soybean_array_new = new Soybean[count_soybean];
    for (int i = 0; i < count_soybean; i++)
    {
      soybean_array_new[i] = soybean_array_old[i + 1];
    }
    delete[] soybean_array_old;
    soybean_array_old = new Soybean[count_soybean];
    soybean_array_old = soybean_array_new;
  }
  // check for wheat
  if (type_wheat.compare(object.get_type()) == 0)
  {
    count_wheat--;
    wheat_array_new = new Wheat[count_wheat];
    for (int i = 0; i < count_wheat; i++)
    {
      wheat_array_new[i] = wheat_array_old[i + 1];
    }
    delete[] wheat_array_old;
    wheat_array_old = new Wheat[count_wheat];
    wheat_array_old = wheat_array_new;
  }
}

// basic function just to run through the array of objects but then calls
// abstract feed function which works differently depending on the type of
// object
void Farm::feed_cows()
{
  for (int i = 0; i < count_cows; i++)
  {
    cow_array_old[i].feed();
  }
}
void Farm::feed_pigs()
{
  for (int i = 0; i < count_pigs; i++)
  {
    pig_array_old[i].feed();
  }
}
void Farm::feed_sheeps()
{
  for (int i = 0; i < count_sheeps; i++)
  {
    sheep_array_old[i].feed();
  }
}
void Farm::feed_corn()
{
  for (int i = 0; i < count_corn; i++)
  {
    corn_array_old[i].feed();
  }
}
void Farm::feed_soybean()
{
  for (int i = 0; i < count_soybean; i++)
  {
    soybean_array_old[i].feed();
  }
}
void Farm::feed_wheat()
{
  for (int i = 0; i < count_wheat; i++)
  {
    wheat_array_old[i].feed();
  }
}

Farm::~Farm(){
    // delete [] cow_array_new;
    // delete [] cow_array_old;
};
