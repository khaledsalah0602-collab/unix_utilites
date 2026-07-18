#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

int main (int argc , char **argv){

int check_error;
if ((check_error =rename(argv[1], argv[2])) == -1){
	fprintf (stderr ,"couldnt reanme :%s\n", strerror(errno));
        exit(-1);
}





return 0;
}
