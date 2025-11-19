#include <stdlib.h>
#include <stdio.h>


int m = 0;

void v(void)

{
  char buffer[520];
  
  fgets(buffer,0x200,stdin);
  printf(buffer);
  if (m == 64) {
    fwrite("Wait what?!\n",1,0xc,stdout);
    system("/bin/sh");
  }
  return;
}



int main(void){
  v();
  return 0;
}

