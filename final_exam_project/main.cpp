/* 
    File: main.cpp 
    Description: Program simulates a small database for mountains. For each mountain, it stores the mountain's name, the country it's in,and its elevation in feet. Within the 'main' function, the program creates a vector of 'Mountain' objects, each initialized with data for a specific mountain.
    It also includes a function 'minElevation' which calculates and returns the minimum elevation among all the mountains in the vector. The 'main' function then iterates over the vector of 'Mountain' objects and prints out the details of each mountain (its name, country, and elevation in both feet and meters)
    FInally, the program prints out the elevation and name of the shortest mountain by using the 'minElevation' function to find the minimum elevation from all the mountains, and then iterating over the vector again to find the mountain with that elevation 
    Email: eduardd3899@student.vvc.edu
    Date: 06/9/23
    Note: "g++ main.cpp mountain.cpp -o main" should be added to terminal after "make main" and then run by "./main"

*/
#include <iostream>
#include <vector>
#include <iomanip>
#include "mountain.h"

using namespace std;

int minElevation(vector<Mountain>& thMntains) { 
  
    int thMinElv = thMntains.at(0).getmntainElevation(); //Initialize 'thMinElv' to the elevation from the first mountain
    string thMntainNme;
    string thMntainCny;

    for (auto &mntains: thMntains) {                    //Iterate over the vector containing the rest of the mountains 
        if (mntains.getmntainElevation() < thMinElv) {  //If it finds a mountain with a lower elevation than 'thMinElv', it updates 'thminElv' to that value
            thMinElv = mntains.getmntainElevation();
            thMntainNme = mntains.getmntainName();
            thMntainCny = mntains.getmntainOrigin();
        }
    } 

    //Output the lowest elevation with its classified mountain from the vector of mountains 
    cout << "The shortest mountain is "<<thMntainNme <<" located in ";
    //Additional output for fluency
    if (thMntainCny =="United States"){
        cout << "the ";
    }
    else {
    }
    cout <<thMntainCny <<" with an elevation of " <<thMinElv <<" feet" <<endl;

    return thMinElv;
}

int main()
{  //Vector is established to create 7 instances of Mountain objects with the provided mountain data
    vector <Mountain> thMntains = {
   Mountain("Chimborazo","Ecuador", 20549),
   Mountain("Matterhorn","Switzerland", 14692),
   Mountain("Olympus","Greece (Macedonia)", 9573),
   Mountain("Everest","Nepal", 29029),
   Mountain("Mount Marcy - Adirondacks","United States", 5344),
   Mountain("Mount Mitchell - Blue Ridge","United States", 6684),
   Mountain("Zugspitze","Switzerland", 9719)
    };
    //Mountain detials outputted in form of data table
    cout << setfill('-') << setw(87) << "" << endl;
    cout << setfill(' ');
    cout<< "| " <<setw(30) << left << "Mountain" <<"| ";
    cout << setw(25) << left << "Country" <<"| ";
    cout << setw(25) <<left <<"Elevation" << "|";
    cout <<endl;

    cout << setfill('-') << setw(87) << "" << endl;
    cout << setfill(' ');

   for (auto &mntains: thMntains) { 
        cout <<"| " <<setw(30) << left << mntains.getmntainName() <<"| ";
        cout << setw(25) <<left << mntains.getmntainOrigin() <<"| ";
        cout << setw(6) <<left <<mntains. getmntainElevation();

        cout <<"(ft) " << "<--> ";
        cout << setw(5) <<left <<mntains.toMters(mntains. getmntainElevation());
        cout <<"(m)" <<" |"<<endl;
        cout << setfill('-') << setw(87) << "" << endl;
        cout << setfill(' ');
    }
    cout <<endl;

    minElevation(thMntains);   //Call to 'minElevation' method that returns the minimum elevation.

    return 0;
    
}