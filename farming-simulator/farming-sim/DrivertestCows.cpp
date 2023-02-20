/*#include "farm.h"
#include "farm_goods.h"
#include "animals.h"
#include "cows.h"
#include "farmer.h"


int main (){
    //cout << "1" << endl;
    Farm farm;
   // cout << "2" << endl;
    Farmer farmer1;
    Cows first_cow;
    // cout << first_cow.get_feed_status() << endl;
    Cows second;
    Cows third;
    //cout << "3" << endl;
    // Cows *c = new Cows();
    cout << first_cow.get_type() << endl;

    farm.buy_goods(first_cow);
    farm.buy_goods(second);
    farm.buy_goods(third);
    cout << "hunger of first cow :" << farm.Farm::cow_array_new[0].get_feed_status() << endl;
    cout << "sell value of first cow :" << farm.Farm::cow_array_new[0].get_sell_value() << endl;
    cout << "price of first cow :" << farm.Farm::cow_array_new[0].get_price() << endl;



    //cout << "4" << endl;
    for (int i = 0; i < 3; i++) {
    cout << "age of " << i << " cow: " << farm.Farm::cow_array_new[i].get_age() << "i: " << i << endl;
    }
    farm.Farm::cow_array_new[0].feed();
    cout << "hunger of first cow after feed :" << farm.Farm::cow_array_new[0].get_feed_status() << endl;
    farm.increase_age();
    farmer1.sleep();
    cout << "time is : " << farmer1.get_time() << endl;

    for (int i = 0; i < 3; i++) {
    cout << "age of " << i << " cow: " << farm.Farm::cow_array_new[i].get_age() << "i: " << i << endl;
    cout << "hunger : " << farm.Farm::cow_array_old[i].get_feed_status() << endl;
    }
    farm.sell_goods(first_cow);
    for (int i = 0; i < farm.get_cow_count(); i++) {
    cout << "age of " << i << " cow: " << farm.Farm::cow_array_new[i].get_age() << "i: " << i << endl;
    }

    //Cows second_cow;
    //second_cow.Cows::buy_goods();

}*/