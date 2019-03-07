/*
tutorial string (char set =string in c)
*/

#include <stdio.h>

int main(int argc , char * argv[]){

  char message[12]="hello world";

  // print full string
  printf("the char set data is %s\n",message);

  // print character form string
  printf("secend character of the char set data is %c\n",message[1]);

 return 0;
}
