#include <stdio.h>
#include <stdlib.h>


int main(){
  //Address Variable Declaration
  int *p; 

  //Creating Heap Memory
  p = (int *)malloc(5*sizeof(int));

  free(p);

  return 0;
}