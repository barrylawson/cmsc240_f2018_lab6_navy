#include <iostream>
#include "IntegerVector.h"
#include "DoubleVector.h"
#include "CharacterVector.h"

std::string toString(CharacterVector v);
std::string toString(DoubleVector v);

int main()
{
  IntegerVector   iv;
  DoubleVector    dv;
  CharacterVector cv;

  //-------------------------------------------------------------------------

  // test IntegerVector: put, get, size, out_of_range
  std::cout << "--------------" << std::endl;
  std::cout << "IntegerVector:" << std::endl;
  std::cout << "---------------" << std::endl;

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


    std::cout << "\n+++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;

  // test CharacterVector: put, get, size, out_of_range

  std::cout << std::endl;
  std::cout << "----------------" << std::endl;
  std::cout << "CharacterVector:" << std::endl;
  std::cout << "----------------" << std::endl;


    std::cout << "--------------" << std::endl;

    std::cout << "\tSize    : " << cv.size()    << " [0]" << std::endl;
    std::cout << "\tContent : " << toString(cv) << " []" << std::endl;
    try {
      std::cout << "\tGet(0) : " << cv.get(0) << " [N/A]";
    } catch(const std::out_of_range& e) {
      std::cerr << "Out Of Range Exception thrown: " << e.what() << std::endl;
    }
    // Testing CharacterVector
    std::cout << std::endl << "Testing CharacterVector:" << std::endl;

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

    std::cout << "\nAfter Adding 3 Elements ('a', 'b', 'c'), test size and print cv.get(1)" << std::endl;
    std::cout << "\tSize    : " << cv.size()  << " [3]" << std::endl;
    std::cout << "\tContent : " << toString(cv) << " [a, b, c]" << std::endl;
    std::cout << "\tGet(1)  : "   << cv.get(1)  << " [b]" << std::endl;

    cv.put('d');
    cv.put('e');

    std::cout << "\nAfter Adding 2 Elements ('d', 'e'), test size and print" << std::endl;
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

  std::cout << "--------------" << std::endl;
  std::cout << "DoubleVector:" << std::endl;
  std::cout << "--------------" << std::endl;

      std::cout << "--------------" << std::endl;

      std::cout << "\tSize    : "   << dv.size()    << " [0]" << std::endl;
      std::cout << "\tContent : "   << toString(dv) << " []" << std::endl;
      try {
        std::cout << "\tGet(0) : "  << dv.get(0)    << " [N/A]";
      } catch(const std::out_of_range& e) {
        std::cerr << "Out Of Range Exception thrown: "  << e.what() << std::endl;
      }
      // Testing DoubleVector
      std::cout << std::endl << "Testing DoubleVector:"   << std::endl;

      std::cout << "\tSize    : " << dv.size()    << " [0]" << std::endl;
      std::cout << "\tContent : " << toString(dv) << " []" << std::endl;
      try {
        std::cout << "\tGet(0) : " << dv.get(0)   << " [N/A]";
      } catch(const std::out_of_range& e) {
        std::cerr << "Out Of Range Exception thrown: " << e.what() << std::endl;
      }

      // Testing non-empty DoubleVector
      dv.put(1.1);
      dv.put(2.2);
      dv.put(3.3);

      std::cout << "\nAfter Adding 3 Elements (1.1, 2.2, 3.3), test size and print dv.get(1)" << std::endl;
      std::cout << "\tSize    : " << dv.size()  << " [3]" << std::endl;
      std::cout << "\tContent : " << toString(dv) << " [1.1, 2.2, 3.3]" << std::endl;
      std::cout << "\tGet(1)  : "   << dv.get(1)  << " [b]" << std::endl;

      dv.put(4);
      dv.put(5);

      std::cout << "\nAfter Adding 2 Integers (4, 5), print string " << std::endl;
      std::cout << "\tSize    : " << dv.size()    << " [5]" << std::endl;
      std::cout << "\tContent : " << toString(dv) << " [1.1, 2.2, 3.3, 4.0, 5.0]" << std::endl;
  
      //Testing put with index
  
      dv.put(100.0, 1);
      dv.put(200.0, 2);
  
      std::cout << "\nAfter Adding 2 Integers at indexes 1 and 2, print string " << std::endl;
      std::cout << "\tSize    : " << dv.size()    << " [5]" << std::endl;
      std::cout << "\tContent : " << toString(dv) << " [1.1, 100.0, 200.0, 4.0, 5.0]" << std::endl;

      // Testing non-empty
      std::cout << std::endl << "Testing out of range:"     << std::endl;

      std::cout << "\tSize    : " << dv.size()    << " [5]" << std::endl;
      try {
        std::cout << "\tGet(6)  : " << dv.get(6)  << " [N/A]"
        << std::endl << std::endl;
      } catch(const std::out_of_range& e) {
        std::cerr << "Out Of Range Exception thrown: " << e.what() << std::endl;
      }

      std::cout << "\n\tSize    : " << dv.size()  << " [5]" << std::endl;
      try {
        std::cout << "\tGet(-1) : " << dv.get(-1) << " [N/A]"
        << std::endl << std::endl;
      } catch(const std::out_of_range& e) {
        std::cerr << "Out Of Range Exception thrown: " << e.what() << std::endl;
      }
      std::cout << "\n+++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;


  std::cout << "--------------------------" << std::endl;
  std::cout << "appended-to IntegerVector:" << std::endl;
  std::cout << "--------------------------" << std::endl;

  std::cout << "----------------------------" << std::endl;
  std::cout << "appended-to CharacterVector:" << std::endl;
  std::cout << "----------------------------" << std::endl;

  std::cout << "-------------------------" << std::endl;
  std::cout << "appended-to DoubleVector:" << std::endl;
  std::cout << "-------------------------" << std::endl;
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

std::string toString(DoubleVector v){
  std::string out("{");
  for(int i = 0; i < v.size(); ++i){
    out += std::to_string(v.get(i));
    if(i < v.size()-1)
      out += ", ";
  }
  out += "}";
  return out;
}
