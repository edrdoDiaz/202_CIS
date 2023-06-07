#include <iostream>
#include <vector>
#include "mountain.h"

using namespace std;

int minElevation(vector<Mountain>& thMntains) {
    int thMinElv = thMntains.at(0).getmntainElevation();

    for (auto &mntains: thMntains) {
        if (mntains.getmntainElevation() < thMinElv) {
            thMinElv = mntains.getmntainElevation();
        }

    }
    return thMinElv;
}

int main()
{
    vector <Mountain> thMntains = {
   Mountain("Chimborazo","Ecuador", 20549),
   Mountain("Matterhorn","Switzerland", 14692),
   Mountain("Olympus","Greece (Macedonia)", 9573),
   Mountain("Everest","Nepal", 29029),
   Mountain("Mount Marcy - Adirondacks","United States", 5344),
   Mountain("Mount Mitchell - Blue Ridge","United States", 6684),
   Mountain("Zugspitze","Switzerland", 9719)
    };
    cout << "Test try:" <<endl;
    
    for (auto &mntains: thMntains) { 
        cout << mntains.getmntainName() <<" ";
        cout <<mntains.getmntainOrigin() <<" ";
        cout <<mntains. getmntainElevation() << "(ft) ";
        cout <<mntains.toMters(mntains. getmntainElevation()) <<"(m)" <<endl;
    }

    int minElev = minElevation(thMntains);
    cout<< minElev <<endl;

    return 0;
    
}