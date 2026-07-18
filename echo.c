#include <stdio.h>


int main (int argc , char ** argv){

int i = 1;
while(argv[i] != NULL){


printf("%s" , argv[i]);
if (argv[++i] == NULL);
else
printf(" ");

}

printf("\n");
return 0;

}
