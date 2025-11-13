#include "stdio.h"
#include <stdlib.h>
#include <unistd.h>



void run(){
    fwrite("Good... Wait what?\n", sizeof(char), 19, stdout);
    system("/bin/sh");
}


int main(int argc, char *argv[]){

    char s[76];
    gets(s);
}
