#include<stdio.h>
#include<stdlib.h>
int main()
{
		int x, a;
		a = malloc(5);
		printf("%ld\n", sizeof(x));
		int a[100];
		printf("%ld\n", sizeof(a));
		printf("%d\n", a);
		free(a);
		return 0;
}
