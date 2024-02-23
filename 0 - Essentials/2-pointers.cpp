#include <iostream>
#include <stdlib.h>
/*
Memory is divided into 3 parts:
  Heap
  Stack
  Code Section

Program does not directly access Heap, for that it needs a pointer
Example: Accessing files that are external to the program, we would need a pointer of file type
*/

int main(){
  /*
  Pointers are used for accessing Heap Memory and Resources
  Used for Parameter Passing
  */

  //Data Variable
  int a = 10;

  //Address Variable
  int *p; //Takes space on stack

  //Initialization, 'p' holds the address of data variable 'a'
  p = &a;


  std::cout << "Address: " << p << std::endl;
  std::cout << "Value: "<< *p << std::endl;

  //Memory Allocation
  p = new int[5]; //Initialized with garbage values
  p[0] = 10;
  p[1] = 50;
  p[2] = 55;
  p[3] = 98;
  p[4] = 134;

  std::cout <<"Size of P is probably 8: " << p << std::endl; 
  std::cout <<"Size of P is probably 8: " << &a << std::endl; 

  p = new int[6];
  std::cout <<"Size of P is probably 8: " << p << std::endl; 

  for(int i = 0; i < 5; i++){
    std::cout << p[i] << std::endl;
  }

  //Memory Deallocation (Heap Memory Should be Deallocated)
  delete [] p;    

  return 0;
}