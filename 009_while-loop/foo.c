/*
tutorial - while loop & do while loop
*/

#include <stdio.h>

int main(int argc ,char * argv[]){
  
 int i=0;
 int k=0; 
 // while loop
 while(i<10){
   i++;
   printf("i value is %d \n",i);
 }

 // do while loop  
 do{
   k++;
   printf("k value is %d \n",k);
 }while(k<10); 
 /*
 do while loop working before check the argument only frist time 
 flow will enter to loop..
 while loop - not work when condition fasle.
 do while loop - work only one time when condition fasle.
 */ 



 return 0;
}
