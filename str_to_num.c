#include<stdio.h>
int main()
{
				int n;
				char inp[10];
				printf("Enter a number: ");
				scanf("%s", inp);
				n = atoi(inp);//				atoi for int			atof for float		atol for long int
				printf("%d\n", n);
				return 0;
}
