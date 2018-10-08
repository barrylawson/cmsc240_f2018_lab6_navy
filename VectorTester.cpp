#include <iostream>
#include "IntegerVector.h"
#include "DoubleVector.h"
#include "CharacterVector.h"

int main()
{
   IntegerVector   iv;
   DoubleVector    dv;
   CharacterVector cv;

   //-------------------------------------------------------------------------

   // test IntegerVector: put, get, size, out_of_range

   std::cout << "--------------" << std::endl;
   std::cout << "IntegerVector:" << std::endl;
   std::cout << "IntegerVector size: " << iv.size() << std::endl;
   std::cout << "Testing put of '5': " << std::endl;
   iv.put(5);
   for(int i = 0; i < iv.size(); i++){
      std::cout << iv.get(i) << std::endl;
   }
   std::cout << "IntegerVector size: " << iv.size() << std::endl;
   std::cout << "Testing put of '6': " << std::endl;
   iv.put(6);
   for(int i = 0; i < iv.size(); i++){
      std::cout << iv.get(i) << std::endl;
   }
   std::cout << "IntegerVector size: " << iv.size() << std::endl;
   std::cout << "Testing put of '7' at index 1" << std::endl;
   iv.put(7,1);
   for(int i = 0; i < iv.size(); i++){
      std::cout << iv.get(i) << std::endl;
   }
   std::cout << "IntegerVector size: " << iv.size() << std::endl;
   
   std::cout << "Testing put of '9' at index 4 (out of range): " << std::endl;
   iv.put(9,4);
   for(int i = 0; i < iv.size(); i++){
      std::cout << iv.get(i) << std::endl;
   }
   std::cout << "IntegerVector size: " << iv.size() << std::endl;
   



   std::cout << "--------------" << std::endl;

   //-------------------------------------------------------------------------

   // test CharacterVector: put, get, size, out_of_range

   std::cout << std::endl;
   std::cout << "----------------" << std::endl;
   std::cout << "CharacterVector:" << std::endl;
   std::cout << "----------------" << std::endl;

   //-------------------------------------------------------------------------

   // test DoubleVector: put, get, size, out_of_range

   std::cout << std::endl;
   std::cout << "-------------" << std::endl;
   std::cout << "DoubleVector:" << std::endl;
   std::cout << "-------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty IntegerVector, test appending cv & dv from above 
   IntegerVector iv2;

   std::cout << std::endl;
   std::cout << "--------------------------" << std::endl;
   std::cout << "appended-to IntegerVector:" << std::endl;
   std::cout << "--------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty CharacterVector, test appending iv & dv from above
   CharacterVector cv2;

   std::cout << std::endl;
   std::cout << "----------------------------" << std::endl;
   std::cout << "appended-to CharacterVector:" << std::endl;
   std::cout << "----------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty DoubleVector, test appending iv & cv from above
   DoubleVector dv2;

   std::cout << std::endl;
   std::cout << "-------------------------" << std::endl;
   std::cout << "appended-to DoubleVector:" << std::endl;
   std::cout << "-------------------------" << std::endl;

   //-------------------------------------------------------------------------

   return 0;
}
