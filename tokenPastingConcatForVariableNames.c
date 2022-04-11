#include<stdio.h>
#define VAR(name, num) name##num

int main()
{
		int i;
		int x1 = 14;
		int x2 = 3;
		int x3 = 123;
		for(i = 0; i <= 3; i++)  // Failed attempt 
		{
				VAR(x, 1) = i;
				printf("%d\n", VAR(x, 1));
		}
		return 0;
}
