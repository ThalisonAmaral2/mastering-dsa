#include <iostream>

//int a[] is a pointer to array
//int *a is a pointer to integer
void func(int a[], int size){
  a[0] = 9;

};

int* getArray(int n){
  int *p;
  p = new int[n];
  return (p);
};

int main(){

  int a[5] = {1,4,7,2,8};

  //Array is passed by address
  func(a, 5);

  for(int i=0; i<5; i++){
    std::cout << a[i] << std::endl;
  }

  int* arr = getArray(10);

  std::cout << "Dynamically Allocated Array...\n";
  for(int i = 0; i < 10; i++){
    std::cout << arr[i] << std::endl;
  }

  delete [] arr;
  return 0;
}