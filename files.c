#include<stdio.h>

int main()
{
		FILE *f;
		f = fopen("file.txt", "r"); // This file exits
		if(f == NULL){
				printf("Error opening 1st file.\n");
				return -1;
		}
		fclose(f);

		f = fopen("notexists.txt", "r");
		if(f == NULL){
				printf("Error opening 2nd file.\n");
				//return -1;
		}
		//fclose(f);
		
		f = fopen("file.txt", "r");
		while(1){
				printf("%c", fgetc(f));
				if(feof(f)){
						printf("%d\n",feof(f));
						break;
				}
		}
		return 0;
}
