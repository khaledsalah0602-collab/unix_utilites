#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main()
{
	int size = 100;
	char buf[size];

	if (getcwd(buf , size) == NULL)
		fprintf(stderr , "getcwd failed: %s\n ", strerror(errno));
	else
		printf("%s\n", buf);







	return 0;
}




