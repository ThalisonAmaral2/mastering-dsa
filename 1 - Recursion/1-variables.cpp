#include <iostream>

int fun(int n){
  if(n > 0){
    return fun(n-1) + n;
  }
  return 0;
}

int fun2(int n){
  static int x = 0; //Work just like global variables (Allocated on Code Section, not Stack)
  if(n > 0){
    x++;
    return fun2(n-1) + x;
  }
  return 0;
}
int main(){
  int n = 5;

  std::cout << fun2(n);
  return 0;
}