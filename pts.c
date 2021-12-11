#include<stdio.h>
//#include<string.h>
int main()
{
				char name[10];
				printf("Enter your name: ");
				fgets(name, 10, stdin);
				printf("Name is ");
				puts(name);
				return 0;
}
