#include <iostream>

void tree(int n){
  //Tracing a Tree Recursion results in a Tree Structure 
  if(n > 0){
    std::cout << n << " ";
    tree(n-1);
    tree(n-1);
  }
};

int main(){

  tree(3);
  return 0;
}