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

  std::cout << "\tSize    : " << cv.size()    << " [0]" << std::endl;
  std::cout << "\tContent : " << toString(cv) << " []" << std::endl;
  try {
    std::cout << "\tGet(0) : " << cv.get(0) << " [N/A]";
  } catch(const std::out_of_range& e) {
    std::cerr << "Out Of Range Exception thrown: " << e.what() << std::endl;
  }

  // Testing non-empty CharacterVector
  cv.put('a');
  cv.put('b');
  cv.put('c');

  std::cout << "\n\tSize    : " << cv.size()    << " [3]" << std::endl;
  std::cout << "\tContent : " << cv.get(1) << " [b]" << std::endl << std::endl;

  cv.put('d');
  cv.put('e');

  std::cout << "\tSize    : " << cv.size()    << " [5]" << std::endl;
  std::cout << "\tContent : " << toString(cv) << " [a, b, c, d, e]" << std::endl;

  // Testing non-empty
  std::cout << std::endl << "Testing out of range:" << std::endl;

  std::cout << "\tSize    : " << cv.size()    << " [5]" << std::endl;
  try {
    std::cout << "\tGet(6)  : " << cv.get(6) << " [N/A]"
    << std::endl << std::endl;
  } catch(const std::out_of_range& e) {
    std::cerr << "Out Of Range Exception thrown: " << e.what() << std::endl;
  }

  std::cout << "\n\tSize    : " << cv.size()    << " [5]" << std::endl;
  try {
    std::cout << "\tGet(-1) : " << cv.get(-1) << " [N/A]"
    << std::endl << std::endl;
  } catch(const std::out_of_range& e) {
    std::cerr << "Out Of Range Exception thrown: " << e.what() << std::endl;
  }
  std::cout << "\n+++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;

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
