#include "stdio.h"
#include "stdlib.h"
#include <string.h>


char *service;
char *auth;



int main(){


	char buffer[0x81];

	while (1){
		printf("%p %p\n", auth, service);
		if (fgets(buffer, 0x80, stdin) == NULL )
			return 0;

		if (strncmp("auth ", buffer, 5) == 0){

			auth = malloc(4);
			if (strlen(&buffer[5]) < 31)
				strcpy(auth, &buffer[5]);
		}
		if (strncmp("reset", buffer, 5) == 0){
			free(auth);
		}
		if (strncmp("login", buffer, 5) == 0){
			if (*(auth + 0x20)){
				system("/bin/sh");
			}else{
				fwrite("Password:\n", sizeof(char), 10, stdout);
			}
		}
		if (strncmp("service", buffer, 7) == 0){
			service = strdup(&buffer[7]);
		}
	}
}
