#include <iostream>
// Indirect Recursion involves in a "Cycle" where one functions call another function

void b(int n);

void a(int n){
  if(n > 0){
    std::cout << n << " ";
    b(n-1);
  }
};

void b(int n){
  if(n > 1){
    std::cout << n << " ";
    a(n/2);
  }
};


int main(){

  a(20);

  return 0;
}