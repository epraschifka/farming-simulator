#include "Farm.h"
#include "Farmer.h"
#include "Farm_goods.h"
#include <iostream>
#include <fstream>
#include <string>
#include "Cows.h"
#include "Sheeps.h"
#include "Pigs.h"
#include "Crops.h"
#include "Wheat.h"
#include "Corn.h"
#include "Soybean.h"
using namespace std;

int main()
{
   string input; // dummy variable which stores input from user
   cout << "Enter 'start' to start the game.\n";
   cin >> input;

   if (input == "start")
   {
      Farm MyFarm = Farm(); // constructs the uesr's farm
      Farmer MyFarmer = Farmer(); // constructs the user's farmer
      while (MyFarmer.get_money() < 10000) // win condition
      {
         cout << "\nIt's day " << MyFarm.get_time() << ", and you have " << MyFarmer.get_money() << " dollars.\n";
         cout << "Enter 'buy' to purchase new goods\n"
              << "Enter 'sell' to sell owned goods\n"
              << "Enter 'feed' to feed animals\n"
              << "Enter 'water' to water crops\n"
              << "Enter 'sleep' to sleep\n";
         cin >> input;
         if (input == "buy")
         {
            while (input != "sleep") // stays in the buy menu until the user types 'exit'
            {
               {
                  cout << "Enter 'pig' to buy a pig (500 dollars)\n";
                  cout << "Enter 'sheep' to buy a sheep (750 dollars)\n";
                  cout << "Enter 'cow' to buy a cow (1500 dollars)\n";
                  cout << "Enter 'wheat' to buy wheat seeds (50 dollars)\n";
                  cout << "Enter 'corn' to buy corn seeds (100 dollars)\n";
                  cout << "Enter 'soybean' to buy soybean seeds (150 dollars)\n";
                  cout << "Enter 'exit' to go back\n";
                  cin >> input;

                  // check for invalid input
                  while (input != "pig" && input != "sheep" && input != "cow" && input != "exit" && input != "wheat" && input != "corn" && input != "soybean")
                  {
                     cout << "Invalid input. Please re-enter.\n";
                     cin >> input;
                  }

                  // leaves the buy menu 
                  if (input == "exit")
                  {
                     break;
                  }
                  if (input == "pig")
                  {
                     if (MyFarmer.get_money() >= 500) // checks the user has enough money
                     {
                        Pigs pig = Pigs(); // creates a pig for the user
                        MyFarm.buy_goods(pig); // adds the pig to the farm array
                        MyFarmer.set_money(MyFarmer.get_money() - 500); // the user loses money
                        cout << "\nYou have bought a pig. You have " << MyFarmer.get_money() << " dollars left.\n";
                     }
                     else
                     {
                        cout << "Insufficient funds.\n";
                     }
                  }
                  if (input == "sheep")
                  {
                     if (MyFarmer.get_money() >= 750) // checks the user has enough money
                     {
                        Sheeps sheep = Sheeps(); // creates a sheep for the user
                        MyFarm.buy_goods(sheep); // adds the sheep to the farm array
                        MyFarmer.set_money(MyFarmer.get_money() - 750); // the user loses money
                        cout << "\nYou have bought a sheep. You have " << MyFarmer.get_money() << " dollars left.\n";
                     }
                     else
                     {
                        cout << "Insufficient funds.\n";
                     }
                  }
                  if (input == "cow")
                  {
                     if (MyFarmer.get_money() >= 1500) // ehecks the user has enough money
                     {
                        Cows cow = Cows(); // creates a cow for the user
                        MyFarm.buy_goods(cow); // adds the cow to the farm array
                        MyFarmer.set_money(MyFarmer.get_money() - 1500); // the user loses money
                        cout << "\nYou have bought a cow. You have " << MyFarmer.get_money() << " dollars left.\n";
                     }
                     else
                     {
                        cout << "Insufficient funds.\n";
                     }
                  }
                  if (input == "wheat")
                  {
                     if (MyFarmer.get_money() >= 50) // checks the user has enough money
                     {
                        Wheat wheat = Wheat(); // creates wheat seeds for the user
                        MyFarm.buy_goods(wheat); // wheat seeds are added to the farm's array
                        MyFarmer.set_money(MyFarmer.get_money() - 50); // the user loses money
                        cout << "\nYou have bought some wheat seeds. You have " << MyFarmer.get_money() << " dollars left.\n";
                     }
                     else
                     {
                        cout << "Insufficient funds.\n";
                     }
                  }
                  if (input == "soybean")
                  {
                     if (MyFarmer.get_money() >= 150) // checks the user has enough money
                     {
                        Soybean soybean = Soybean(); // creates soybean seeds for the user
                        MyFarm.buy_goods(soybean); // the soybean seeds are added to the farm array
                        MyFarmer.set_money(MyFarmer.get_money() - 150); // the user loses money
                        cout << "\nYou have bought some soybean seeds. You have " << MyFarmer.get_money() << " dollars left.\n";
                     }
                     else
                     {
                        cout << "Insufficient funds.\n";
                     }
                  }
                  if (input == "corn")
                  {
                     if (MyFarmer.get_money() >= 100) // checks that the user has enough money
                     {
                        Corn corn = Corn(); // creates corn seeds for the user
                        MyFarm.buy_goods(corn); // adds corn seeds to farm array 
                        MyFarmer.set_money(MyFarmer.get_money() - 100); // user loses money
                        cout << "\nYou have bought some corn seeds. You have " << MyFarmer.get_money() << " dollars left.\n";
                     }
                     else
                     {
                        cout << "Insufficient funds.\n";
                     }
                  }
               }
            }
         }
         if (input == "sell")
         {
            while (input != "sleep") // keeps user in sell menu
            {
               cout << "Enter 'pig' to sell a pig (800 dollars)\n";
               cout << "Enter 'sheep' to sell a sheep (1400 dollars)\n";
               cout << "Enter 'cow' to sell a cow (3000 dollars)\n";
               cout << "Enter 'wheat' to sell wheat (200 dollars)\n";
               cout << "Enter 'corn' sell corn (300 dollars)\n";
               cout << "Enter 'soybean' to sell soybeans (400 dollars)\n";
               cout << "Enter 'exit' to go back\n";
               cin >> input;

               // checks for invalid input
               while (input != "pig" && input != "sheep" && input != "cow" && input != "exit" && input != "wheat" && input != "soybean" && input != "corn")
               {
                  cout << "Invalid input. Please re-enter.\n";
                  cin >> input;
               }
               if (input == "exit")
               {
                  break;
               }
               if (input == "pig")
               {
                  // check that the pig is ready to be sold
                  if (MyFarm.pig_array_old[0].get_age() > MyFarm.pig_max_age) 
                  {
                     // sells the pig
                     MyFarm.sell_goods(MyFarm.pig_array_old[0]);
                     MyFarmer.set_money(MyFarmer.get_money() + 800);
                     cout << "You sold a pig for 800 dollars.\n";
                  }
                  else
                  {
                     cout << "No pigs old enough to sell.\n";
                  }
               }
               if (input == "sheep")
               {
                  // checks if the sheep is ready to be sold
                  if (MyFarm.sheep_array_old[0].get_age() > MyFarm.sheep_max_age)
                  {
                     // sells the sheep
                     MyFarm.sell_goods(MyFarm.sheep_array_old[0]);
                     MyFarmer.set_money(MyFarmer.get_money() + 1400);
                     cout << "You sold a sheep for 1400 dollars.\n";
                  }
                  else
                  {
                     cout << "No sheeps old enough to sell.\n";
                  }
               }
               if (input == "cow")
               {
                  // checks if the cow is ready to be sold
                  if (MyFarm.cow_array_old[0].get_age() > MyFarm.cow_max_age)
                  {
                     // sells the cow
                     MyFarm.sell_goods(MyFarm.cow_array_old[0]);
                     MyFarmer.set_money(MyFarmer.get_money() + 3000);
                     cout << "You sold a cow for 3000 dollars.\n";
                  }
                  else
                  {
                     cout << "No cows old enough to sell.\n";
                  }
               }
               if (input == "wheat")
               {
                  // checks if the wheat is ready to be sold
                  if (MyFarm.wheat_array_old[0].get_age() > MyFarm.wheat_max_age)
                  {
                     // sells the wheat
                     MyFarm.sell_goods(MyFarm.wheat_array_old[0]);
                     MyFarmer.set_money(MyFarmer.get_money() + 200);
                     cout << "You sold some wheat for 200 dollars.\n";
                  }
                  else
                  {
                     cout << "No wheat ready to sell.\n";
                  }
               }
               if (input == "corn")
               {
                  // checks if the corn is ready to be sold
                  if (MyFarm.corn_array_old[0].get_age() > 1)
                  {
                     // sells the corn
                     MyFarm.sell_goods(MyFarm.corn_array_old[0]);
                     MyFarmer.set_money(MyFarmer.get_money() + 300);
                     cout << "You sold some corn for 300 dollars.\n";
                  }
                  else
                  {
                     cout << "No corn ready to sell.\n";
                  }
               }
               if (input == "soybean")
               {
                  // checks if the soybean is ready to be sold
                  if (MyFarm.soybean_array_old[0].get_age() > 1)
                  {
                     // sells the soybean
                     MyFarm.sell_goods(MyFarm.soybean_array_old[0]);
                     MyFarmer.set_money(MyFarmer.get_money() + 400);
                     cout << "You sold some soybeans for 400 dollars.\n";
                  }
                  else
                  {
                     cout << "No soybean ready to sell.\n";
                  }
               }
            }
         }
         if (input == "feed")
         {
            while (input != "sleep")
            {
               cout << "Enter 'pig' to feed pigs\n";
               cout << "Enter 'sheep' to feed sheep\n";
               cout << "Enter 'cow' to feed cows\n";
               cout << "Enter 'exit' to go back\n";
               cin >> input;
               
               // checks for invalid input
               while (input != "pig" && input != "sheep" && input != "cow" && input != "exit")
               {
                  cout << "Invalid input. Please re-enter.\n";
                  cin >> input;
               }
               if (input == "exit")
               {
                  break;
               }
               if (input == "pig")
               {
                  // checks if the user owns pigs
                  if (MyFarm.get_pigs_count() == 0)
                  {
                     cout << "No pigs to feed.\n";
                  }
                  else
                  {
                     // feeds pigs if they are hungry
                     if (MyFarm.pig_array_old[0].get_feed_status() != 100)
                     {
                        MyFarm.feed_pigs();
                        cout << "\nYou feed your pigs.\n";
                     }
                     else
                     {
                        cout << "Your pigs have already been fed.\n";
                     }
                  }
               }
               if (input == "cow")
               {
                  // checks if the user has cows
                  if (MyFarm.get_cow_count() == 0)
                  {
                     cout << "No cows to feed.\n";
                  }
                  else
                  {
                     // feeds cows if they are hungry
                     if (MyFarm.cow_array_old[0].get_feed_status() != 100)
                     {
                        MyFarm.feed_cows();
                        cout << "\nYou feed your cows.\n";
                     }
                     else
                     {
                        cout << "Your cows have already been fed.\n";
                     }
                  }
               }
               if (input == "sheep")
               {
                  // checks if the user has sheep
                  if (MyFarm.get_sheeps_count() == 0)
                  {
                     cout << "No sheep to feed.\n";
                  }
                  else
                  {
                     // feeds the sheep if they are hungry
                     if (MyFarm.sheep_array_old[0].get_feed_status() != 100)
                     {
                        MyFarm.feed_sheeps();
                        cout << "\nYou feed your sheep.\n";
                     }
                     else
                     {
                        cout << "Your sheep have already been fed.\n";
                     }
                  }
               }
            }
         }
         if (input == "water")
         {
            while (input != "sleep") // keeps user in water menu
            {
               cout << "Enter 'corn' to water corn\n";
               cout << "Enter 'soybean' to water soybean\n";
               cout << "Enter 'wheat' to water wheat\n";
               cout << "Enter 'exit' to go back\n";
               cin >> input;
               
               // checks for invalid input
               while (input != "corn" && input != "soybean" && input != "wheat" && input != "exit")
               {
                  cout << "Invalid input. Please re-enter.\n";
                  cin >> input;
               }
               if (input == "exit")
               {
                  break;
               }
               if (input == "corn")
               {
                  // checks if user owns corn
                  if (MyFarm.get_corn_count() == 0)
                  {
                     cout << "No corn to water.\n";
                  }
                  else
                  {
                     // waters corn if it needs to be watered
                     if (MyFarm.corn_array_old[0].get_feed_status() != 100)
                     {
                        MyFarm.feed_corn();
                        cout << "\nYou water your corn.\n";
                     }
                     else
                     {
                        cout << "Your corn has already been watered.\n";
                     }
                  }
               }
               if (input == "wheat")
               {
                  // checks if user owns wheat
                  if (MyFarm.get_wheat_count() == 0)
                  {
                     cout << "No wheat to water.\n";
                  }
                  else
                  {
                     // waters wheat
                     if (MyFarm.wheat_array_old[0].get_feed_status() != 100)
                     {
                        MyFarm.feed_wheat();
                        cout << "\nYou water your wheat.\n";
                     }
                     else
                     {
                        cout << "Your wheat has already been watered.\n";
                     }
                  }
               }
               if (input == "soybean")
               {
                  // checks if user owns soybeans
                  if (MyFarm.get_soybean_count() == 0)
                  {
                     cout << "No soybeans to water.\n";
                  }
                  else
                  {
                     // waters soybeans
                     if (MyFarm.soybean_array_old[0].get_feed_status() != 100)
                     {
                        MyFarm.feed_soybean();
                        cout << "\nYou water your soybeans.\n";
                     }
                     else
                     {
                        cout << "Your soybeans have already been watered.\n";
                     }
                  }
               }
            }
         }
         if (input == "sleep")
         {
            //notifies user they forgot to feed their cows, if they had any
            if (MyFarm.get_cow_count() > 0)
            {
               if (MyFarm.cow_array_old[0].get_feed_status() != 100)
               {
                  cout << "\nYou forgot to feed your cow!\n";
               }
            }
            //notifies user they forgot to feed their cows, if they had any
            if (MyFarm.get_sheeps_count() > 0)
            {
               if (MyFarm.sheep_array_old[0].get_feed_status() != 100)
               {
                  cout << "\nYou forgot to feed your sheep!\n";
               }
            }
            //notifies user they forgot to feed their cows, if they had any
            if (MyFarm.get_pigs_count() > 0)
            {
               if (MyFarm.pig_array_old[0].get_feed_status() != 100)
               {
                  cout << "\nYou forgot to feed your pig!\n";
               }
            }
            MyFarmer.sleep(); // resets farmer's energy
            MyFarm.decrease_hunger(); // reduces hunger of animals and plants
            MyFarm.set_time(MyFarm.get_time() + 1); // increases day by 1
         }
      }
      // end game message
      cout << "\nCongratulations, you have made over 10,000 dollars for the farmer, and so\n"
           << "your job is done. Game Over!\n";
   }
}