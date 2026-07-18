#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#define size 100

int main (int argc , char ** argv){


char buf[size];

int fd_1 = open (argv[1], O_RDONLY );
if (fd_1 == -1){
	fprintf(stderr , "open read file failed%s\n" , strerror(errno));
        exit(-1);
}
int fd_2 = open (argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644 );
if (fd_2 == -1){
        fprintf(stderr , "open write file failed%s\n" , strerror(errno));
        exit(-2);
}
int read_bytes;
int write_check;

while ((read_bytes = read( fd_1 , buf , size )) > 0 )
{

if ((write_check = write (fd_2 , buf , read_bytes)) == -1 )
		fprintf(stderr , "write on file failed%s\n" , strerror(errno));




}

close (fd_1);
close (fd_2);

return 0;
}
