/* 
    File: mountain.cpp
    Description: Contains the definitions of the defined member functions in 'mountain.h'. 
    Email: eduardd3899@student.vvc.edu
    Date: 06/9/23
*/
#include "mountain.h"
#include <iostream> 


int Mountain::toMters (int thElvation) { 
    return thElvation/3.2808;
 }

string Mountain::getmntainName() { 
    return mntainName;
}
string Mountain::getmntainOrigin() { 
    return mntainOrigin;
}
int Mountain::getmntainElevation() { 
    return mntainElevation;
}