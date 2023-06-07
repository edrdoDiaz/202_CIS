#include <iostream>
#include <vector>
#include "mountain.h"

using namespace std;

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
    cout << thMntains.at(0).getmntainName() <<" " <<thMntains.at(0).getmntainOrigin() <<" "<<thMntains.at(0). getmntainElevation() << " "<<thMntains.at(0).toMters(thMntains.at(0). getmntainElevation()) <<endl;
    
    return 0;
}