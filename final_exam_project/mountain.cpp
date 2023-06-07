#include "mountain.h"
#include <iostream> 


int Mountain::toMters (int thElvation) { 
    int cnvrsion = (thElvation/3.2808);
    return cnvrsion;
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