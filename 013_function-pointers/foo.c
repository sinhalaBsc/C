/*
tutorial - function pointers
*/
#include <stdio.h>

int add_numbers(int a,int b);

int main(int argc , char *argv[]){
 int result;
 int (*myfunc_ptr)(int,int); // function pointer
 myfunc_ptr = &add_numbers;  // give pointer value
 result = myfunc_ptr(4,5);
 printf("sum of tow numbers %d\n",result );
 return 0;
}


int add_numbers(int a , int b){
  int sum;
  sum = a+b;
  return sum;
}
