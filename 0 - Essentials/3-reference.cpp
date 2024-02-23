#include <iostream>


void inc(int number){
  int &r = number;
  number++;
  std::cout << number << std::endl;
}

int main(){
  int a = 10;

  int &reference = a;

  reference = 60;

  std::cout << a << std::endl;

  inc(a);
  std::cout << a << std::endl;


  return 0;
}