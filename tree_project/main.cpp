#include <iostream>
#include <string>
#include "tree.h"


int main()
{
   Tree t1("Anne"); //Root of the first tree 
   
   Tree t2("Peter");//Root of the second tree
   t1.add_subtree(t2);

   Tree t3("Zara"); //Root of the third tree 
   t1.add_subtree(t3);

   Tree t4("Savannah"); //Root of the fourth tree 
   t2.add_subtree(t4);
   std::cout << "Size: " << t1.size() << std::endl;

   t1.print();   // this will recursively print the tree.
//g++ main.cpp tree.cpp -o main
   return 0;
}