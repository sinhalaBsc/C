/*
tutorial -typedef statement
*/
#include <stdio.h>

typedef int INT32;
typedef char MYCHR;

typedef struct mystruct_t{
    int a;
    int b;
}MYSTRX;


int main(int argc, char *argv[]){
 
 INT32 i;
 MYCHR mystr[20]="Hellw World";

 MYSTRX gold;
 MYSTRX silver;
 MYSTRX bronzer;

 gold.a=2;
 gold.b=4;

 silver.a=5;
 silver.b=8;

 printf("INT32 i = %d \n",i);
 printf("mysrt = %s \n",mystr);
 
 printf("gold.a = %d\n",gold.a);
 printf("gold.b = %d\n",gold.b);
  
 printf("silver.a = %d\n",silver.a);
 printf("silver.b = %d\n",silver.b);
 
 return 0;
}
