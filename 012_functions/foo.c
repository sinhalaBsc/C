/*
tutorila - functions
*/
#include <stdio.h>

int add_numbers(int a , int b);

int main(int argc , char *argv[]){
 
 int result;

 result = add_numbers(2,8);
 printf("sum is %d\n",result);
 

 return 0;
}


int add_numbers(int a ,int b){
    int sum;
    sum=a+b;
    return sum;
}

