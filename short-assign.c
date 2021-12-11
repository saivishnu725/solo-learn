#include<stdio.h>
int main()
{
				int x = 2;
				printf("%d\t", x);
				x += 3 * 2;
				printf("%d\t", x);
				x = 2;
				x = x + 3 * 2;
				printf("%d\t", x);
				x = 2;
				x = x + ( 3 * 2 );
				printf("%d\n", x);
				return 0;
}
