/*
tutorial about pointers 
*/
#include <stdio.h>

int main(int argc, char * argv[]){
  
  int *k;
  int n;

  n=25;
  k=&n;

  printf("n  = %d\n",n);
  printf("k  = %x\n",k);
  printf("*k = %d\n",*k);

  return 0;
}
