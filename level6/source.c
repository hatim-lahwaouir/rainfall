
#include "stdlib.h"
#include "stdio.h"
#include "string.h"



void n(void){
  system("/bin/cat /home/user/level7/.pass");
  return;
}



void m(void)
{
  puts("Nope");
  return;
}



void main(int argc,char *argv[]){
  char *dest;
  void (*fptr)(void);
  
  dest = (char *)malloc(0x40);
  fptr = (void *)malloc(4);
  fptr = m;
  strcpy(dest,argv[1]);

  fptr();
  return;
}
