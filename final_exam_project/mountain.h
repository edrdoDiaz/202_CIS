#ifndef MOUNTAIN_H
#define MOUNTAIN_H
/* 
    File: mountain.h
    Description: The 'Mountain' class is defined. Each 'Mountain' object has three private memeber varibales: 'mntainName'(a string),"mntainOrigin' (another string), and 'mntainElevation' (an int, representing the mountain's elevation in feet)
    The 'Mountain' class also includes public member functions to set and get each of these private members(the getters and setters). In addition, the class includes a member function call 'toMetrs()' that return the mountain's elevation in meters, 
    calculated by dividing the elevation in feet by 3.2808( since 1 meter is approx. equal to 3.2808 feet).
    Email: eduardd3899@student.vvc.edu
    Date: 06/9/23
*/
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

string getmntainName();  //Getter function for mountain name 
string getmntainOrigin(); //Getter function for mountain country
int getmntainElevation();  //Getter function for mountain elevation

int toMters (int thElvtion); //Converts elevation value from feet to meters

};
#endif