#ifndef MOUNTAIN_H
#define MOUNTAIN_H
#include <string> 
#include <vector>
#include <iostream>

using std::string; 


class Mountain { //Mountain class that stores mountain details
private: 

string mntainName; //Stores the mountain name
string mntainOrigin; //Stores the mountain origin
int mntainElevation; //Stores the mountain elevation 

public: 

Mountain(string thNme, string thCntry, int thElvtion){ 
    mntainElevation = thElvtion;
    mntainOrigin = thCntry;
    mntainName = thNme;
}

string getmntainName(); //Getter function for mountain name 
string getmntainOrigin(); //Getter function for mountain country
int getmntainElevation(); //Getter function for mountain elevation

int toMters (int thElvtion); //Converts elevation value from feet to meters

};
#endif