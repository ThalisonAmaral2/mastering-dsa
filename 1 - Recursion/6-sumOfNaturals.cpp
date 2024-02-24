#include <iostream>

int totalSum(int numbers[], int l){
  if(l > 0){
    return numbers[l] + totalSum(numbers, l-1);
  }
  return numbers[l];
};


int sumFun(int n){
  if(n == 0)
      return 0;
  return sumFun(n-1)+n;
}

int main(){

  int numbers[] = {1,2,3,4,5,6,7,10};
  int last = sizeof(numbers) / sizeof(numbers[0]) - 1;

  int sum = totalSum(numbers, last);
  // std::cout << sum << std::endl;

  int sum2 = sumFun(7);
  std::cout << sum2;


  return 0;
}