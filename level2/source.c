
#include <string.h>
#include "stdlib.h"
#include "stdio.h"

void p(void){
  char buffer[76];
  void *ret = __builtin_return_address(0);


  fflush(stdout);
  gets(buffer);
  if (((unsigned long)ret & 0xb0000000) == 0xb0000000) {
    printf("(%p)\n",ret);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  puts(buffer);
  strdup(buffer);
  return;
}



void main(void)

{
  p();
  return;
}
