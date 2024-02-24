#include <iostream>

int pow(int n, int e){
  if(e == 0)
    return 1;
  return n * pow(n, e-1);
};


int pow2(int n, int e){
  if(e == 0)
    return 1;
  if(e % 2 == 0)
    return pow2(n*n, e/2);
  else
    return n * pow2(n*n, (e-1)/2);
};
int main(){

  int res = pow2(2,4);
  std::cout << res;
  return 0;
}