#include<stdio.h>

int main()
{
		printf("%s %s\n", __TIME__, __DATE__);
		printf("STDC = %d\n", __STDC__);
		printf("Current line number = %d\n", __LINE__);
		printf("File name = %s\n", __FILE__);
		return 0;
}
