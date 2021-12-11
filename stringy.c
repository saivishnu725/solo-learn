#include<stdio.h>
#include<string.h>

int main()
{
				char info[100];
				char dept[] = "HR";
				int emp = 123;
				sprintf(info, "The %s dept has %d employees.", dept, emp);
				puts(info);
				printf("%s\n",info);

				char a[] = "Bangalore KA 560066";
				char city[50], state[50];
				int pin;
				sscanf(a, "%s %s %d", city, state, &pin);
				printf("%s\t%s %s %d\n", a, city, state, pin);

				char s1[20] = "Hello ";
				char s2[20] = "World!!";
				printf("Length of s1 is %d and s2 is %d\n", strlen(s1), strlen(s2));
				strcat(s1, s2);
				printf("s1 after concat = %s\n", s1);
				strcpy(s1, s2);
				printf("s1 after replacing it with s2 is %s\n", s1);

				return 0;
}

/*
				strlen(str) = length of the string.
				strcat(str1, str2) = merge str1 + str2 and stores it in str1.
				strcpy(str1, str2) = save contents of str2 in str1.
				strncat(str1, str2, n) = same as strcat() but ads only first n characters of str2.
				strncpy(str1, str2, n) = same as strcpy() but only first n char is saved.
				strcmp(str1, str2) = compares the string and returns 0 if both are same.
				strncmp(str1, str2, n) = same as strcmp() but compares only first n characters.
				strchr(str1, <character>) = returns the index of FIRST occurance of entere character, if it is not found then returns NULL.
				strrchr(str1, <character>) = same as strchr() but returns the LAST occurance.
				strstr(str1, str2) = same as strchr() but searches for str2 in str1 instead of a character.
 * */
