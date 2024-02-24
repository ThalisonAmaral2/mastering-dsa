#include <iostream>
//Tail Recursion are easily translated to Loops, while Loops uses less memory

void tail(int n){//Each call will allocate variables on stack
  if(n > 0){
    std::cout << n;
    //Tail recursion is caracterized by using Call Time only
    tail(n-1);
  }
};

void loop(int n){
  while(n > 0){
    std::cout << n;
    n--;
  }
};

void head(int n){
  if(n > 0){
    head(n-1);
    std::cout << n;
    //The fact head performs on Returning Time only
    //It isn't easily comparable to a normal loop without different implementation
  }
};

void headLoop(int n){
  int x = 1;
  while(n > 0){
    n--;
    std::cout << x;
    x++;
  }
}

int main(){
  headLoop(3);
  return 0;
}