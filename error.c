#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
//extern int errno;				DIDN'T WORK!!

int main()
{
		FILE *f;

		errno = 0;
		f = fopen("imaginary_file.txt", "r");

		if(f == NULL)
		{

				fprintf(stderr, "Error opening file: %d\n", errno);
				exit(EXIT_FAILURE);
		}
		fclose(f);

		return 0;
}
