
#include "stdio.h" 
#include "time.h"
#include <string.h>
#include "stdlib.h"


char c[100];
void m(){
  time_t tVar1;

  tVar1 = time((time_t *)0x0);
  printf("%s - %ld\n",c,tVar1);
  return;
}



int main(int argc, char *argv[])
{
    int *b;  
    int *a; 

    a = malloc(8);
    a[0] = 1;
    a[1] = malloc(8);

    b = malloc(8);
    b[0] = 2;
    b[1] = malloc(8);
    strcpy((char *)a[1], argv[1]);
    strcpy((char *)b[1], argv[2]);
    fgets(c, 68, fopen("/home/user/level8/.pass", "r"));
    puts("~~");
    return 0;
}

