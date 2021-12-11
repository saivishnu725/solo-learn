#include<stdio.h>

int square(int n)
{
				return n * n;
}

int main()
{
				int x, result;
				printf("Enter a number: ");
				scanf("%d", &x);
				result = square(x);
				printf("Square of %d = %d\n", x, result);
				return 0;
}
