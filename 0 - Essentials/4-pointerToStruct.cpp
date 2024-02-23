#include <iostream>


struct Rectangle
{
  int length;
  int breadth;
};

int main(){

  struct Rectangle r = {10,5};
  struct Rectangle *p  = &r;

  r.length = 15;

  //Both ways to access a struct using pointers
  (*p).length = 20;
  p -> length = 21;

  std::cout << r.length << std::endl;


  //Now for accessing heap memory
  struct Rectangle *p2;
  p2 = new struct Rectangle;

  p2 -> length = 120;
  p2 -> breadth = 89;

  return 0;
}