#include <iostream>
#include "IntegerVector.h"
#include "DoubleVector.h"
#include "CharacterVector.h"

std::string toString(CharacterVector v);

int main()
{
  IntegerVector   iv;
  DoubleVector    dv;
  CharacterVector cv;

  //-------------------------------------------------------------------------

  // test IntegerVector: put, get, size, out_of_range

  std::cout << "--------------" << std::endl;
  std::cout << "IntegerVector:" << std::endl;
  std::cout << "--------------" << std::endl;

  //-------------------------------------------------------------------------

  // test CharacterVector: put, get, size, out_of_range

  std::cout << std::endl;
  std::cout << "----------------" << std::endl;
  std::cout << "CharacterVector:" << std::endl;
  std::cout << "----------------" << std::endl;

  std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;

  // Testing CharacterVector
  std::cout << std::endl << "Testing CharVector:" << std::endl;


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

  std::cout << "\tSize    : " << cv.size()    << " [0]" << std::endl;
  std::cout << "\tContent : " << toString(cv) << " []" << std::endl;
  try {
    std::cout << "\tGet(0) : " << cv.get(0) << " [N/A]";
  } catch(const std::out_of_range& e) {
    std::cerr << "Out Of Range Exception thrown: " << e.what() << std::endl;

}

std::string toString(CharacterVector v){
  std::string out("{");
  for(int i = 0; i < v.size(); ++i){
    out += v.get(i);
    if(i < v.size()-1)
    out += ", ";
  }
  out += "}";
  return out;
}
