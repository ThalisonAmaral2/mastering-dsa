#include <iostream>
//Calling time
//Returning time


// void fun(int n){
//   if(n>0){
//     //Calling Time
//     fun(n-1);
//     //Returning Time
//   }
// }

void fun1(int n){
  if(n > 0){
    std::cout << n;
    fun1(n-1);
  }
}

void fun2(int n){
  if(n > 0){
    fun2(n-1);
    std::cout << n;
  }
}


int main(){
  int x = 3;

  fun1(x);
  std::cout << std::endl;
  fun2(x);
  return 0;
}