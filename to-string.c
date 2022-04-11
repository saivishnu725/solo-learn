#include<stdio.h>

#define TO_STR(x) #x

int main()
{
		printf("%s\n", TO_STR(12));
		printf("%s\n", TO_STR(12.4342));
		return 0;
}
