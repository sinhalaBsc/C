/*
tutorial - store varialble in 'struct'
*/

#include <stdio.h>

int main(int argc , char *argv[]){
  

   struct{
     int a;
     float b;
     int c;
   }myst;      // 'myst' is name of struct and stored variables can call using this name

  myst.a=4;
  myst.b=3.37;
  myst.c=8;


  printf("a =%d , b =%f , c =%d \n",myst.a ,myst.b ,myst.c);  



 return 0;
}
