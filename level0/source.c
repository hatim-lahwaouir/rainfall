#include "stdio.h"
#include <stdlib.h>
#include <unistd.h>



int main(int argc, char *argv[]){



    if (atoi(argv[1]) == 423){

        char *a[] = {"/bin/sh", NULL};
        execv("/bin/sh", a);
    }else{
        fwrite("No !\n", sizeof(char), 5, stderr);
    }
}
