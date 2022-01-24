#include<stdio.h>
int main()
{
		FILE *f;
		char name[] = "Vishnu";
		char college[] = "Whitefield";
		//char filename[50];
		f = fopen("writefile.txt", "w");
		//printf("Enter the file name: ");
		//scanf("%s", filename);
		//f = fopen(filename, "w");
		
		//fputc(char, fp) - writes a character to file.
		fputc('v', f);
		fputc('\n', f);
		
		// fputs(string, file_pointer) - writes a string to file.
		fputs("This is a string.\n", f);
		
		//fprintf(file_pointer, string, variables) - it writes the contents of variables in the format of string to the file.
		fprintf(f, "My name is %s.\nCurrently staying in %s\n", name, college);

		fclose(f);
		return 0;
}
