#include <iostream>

int main(){
//Array is defined as collection of similar data types

  int numbers[5]; //Declaration
  for(int number : numbers){
    std::cout << number << ",";  //It will display garbage values
  }
  std::cout << "\n";


  int numbers2[5] = {0};  //Declaration and Initialization 
  for(int number : numbers2){
    std::cout << number << ","; //All values were initialized as 0
  }
  std::cout << "\n";

  int sizeBytes = sizeof(numbers);
  int length = sizeBytes / sizeof(numbers[0]);
  std::cout << "The array numbers[5] has " << sizeBytes << " bytes\n";
  std::cout << "It has " << length << " values, each value with "<< sizeof(numbers[0]) << " bytes \n";



  return 0;
}