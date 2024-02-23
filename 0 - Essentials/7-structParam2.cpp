#include <iostream>

struct Data{
  int list[3];
};

void modify(struct Data d){
  d.list[0] = 1;
}

void modifyArray(int arr[]){
  arr[0] = 1;
}

int main(){

  struct Data data =  {50, 75, 120};
  modify(data);

  int arr1[] = {50, 75, 120};
  modifyArray(arr1);
  std::cout << arr1[0] << std::endl;
  

  return 0;
}