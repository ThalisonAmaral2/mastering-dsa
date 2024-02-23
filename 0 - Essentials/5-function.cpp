#include <iostream>


void swapValue(int x, int y){
  int temp;
  temp = x;
  x = y;
  y = temp;
};

void swapAddress(int *x, int *y){
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
};

void swapRef(int &x, int &y){
  int temp;
  temp = x;
  x = y;
  y = temp;
  std::cout << x <<" "<< y << std::endl;
};

int main(){

  int a,b;

  a = 10;
  b = 20;

  // swapValue(a,b);
  // std::cout << a <<" "<< b << std::endl;

  // swapRef(a,b);
  // std::cout << a <<" "<< b << std::endl;


  swapAddress(&a, &b);
  std::cout << a <<" "<< b << std::endl;
  return 0;
}