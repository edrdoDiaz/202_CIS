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