#include<stdio.h>

int main()
{
		FILE *f;
		char buff[200], item[10], c;
		float price;

		// Reading from the file.
		f = fopen("file.txt", "r");
		if(f == NULL){
				printf("File doesn't exist.\n");
				return -1;
		}

		fgets(buff, 33, f);
		printf("%s\n", buff);
		
		fscanf(f, "%s", item);
		printf("Item: %s\n", item);
		
		while((c = getc(f)) != EOF)
				printf("%c", c);
		fclose(f);
		return 0;
}
