#ifndef MOUNTAIN_H
#define MOUNTAIN_H
#include <string> 
#include <vector>
#include <iostream>

using std::string; 


class Mountain { 
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
//Create memebr function that takes in the name, country, and elevation

string getmntainName();
string getmntainOrigin();
int getmntainElevation();



//Creat meebr function "toMeters" that at will take the elevation and convert the value from feet to meters and return the converted value.  
//The relationship for feet to meters is 1 meter per 3.2808 feet
int toMters (int thElvtion);




};
#endif