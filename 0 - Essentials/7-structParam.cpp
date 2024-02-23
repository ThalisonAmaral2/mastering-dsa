#include <iostream>

struct Rectangle {
  int length;
  int breadth;
};

// Struct is passed by value
int area(struct Rectangle r){
  return r.length * r.breadth; 
};

void changeLength(struct Rectangle *p, int newLength){
  p -> length = newLength; 
}

int main(){

  struct Rectangle a = {4,2};

  std::cout << "The area of that Rectangle is: " << area(a) << std::endl;

  changeLength(&a, 10);

  std::cout << "The area of that Rectangle is: " << area(a) << std::endl;

  return 0;
}