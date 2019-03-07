/*
tutorial int ,float ,long int , double data type size and it's addition.
*/

#include <stdio.h>

int main(int argc,char * argv[]){

 
 int intk=10,sum;
 float floatk=12.25;
 long int longk=1250.32;
 double doublek=412.02;
 
 
 printf("int value %d\n",sizeof(int));
 printf("float value %d\n",sizeof(float));
 printf("long int value %d\n",sizeof(long int));
 printf("double value %d\n",sizeof(double));
 
 // add int and float
 sum=intk+floatk;
  
 printf("sum value %f\n",sum);
 return 0;
}
