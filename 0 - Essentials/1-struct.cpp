#include <iostream>

//Structure is defined as collection of related Data Members under one name
//Structure is used for defining user defined data types
struct Rectangle {
  
  int length;
  int breadth;
} r1; //Declaration along with Definition

struct Rectangle r2;  //Global Declaration

int main(){

  struct Rectangle r3 = {10,5};


  std::cout << "Size: " << sizeof(r3) << "\n";

  return 0;
}