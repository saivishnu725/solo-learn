#include<stdio.h>
#include<stdlib.h>

int main()
{
		int *p;
		/* it creates memory continuously so the first block + n = nth block */
		p = malloc(10 * sizeof(*p)); /* allocating 10* size of p (because if we change datatype of p to float then 10 floats worth of space is allocated instead of int) */
		if (p != NULL) // if it is NULL then it means that memory was not allocated.
		{
				*p = 20;
				*(p + 2) = 50; /* p + 2 is 2 more than first loc so 3rd int. */
				printf("%d\t%d\n", *p, *(p + 2));
		}

		return 0;
}
