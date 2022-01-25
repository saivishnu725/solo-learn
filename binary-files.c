#include<stdio.h>

int main()
{
		FILE *f;
		int a[10]; //	stores input  array that will be saved in the file.
		int x[10]; //	stores output array that was saved in file.
		int i; //		loop
		
		// generate array of numbers
		for(i=0;i<10;i++)
				a[i] = i;
		// write a[o to 9] to the file
		f = fopen("binaryfile.bin", "wb");
		/*
		 * fwrite(ptr, item_size, num_size, fp) -> writes array to the file
		 * 
		 * ptr -> pointer of the array.
		 * 
		 * item_size -> size of individual value.
		 * 
		 * num_size -> total number of values.
		 * (found by total memory divided by memory of a single value)
		 * 
		 * fp -> file pointer.
		 *
		*/
		fwrite(a, sizeof(a[0]), sizeof(a)/sizeof(a[0]), f);
		fclose(f);

		// read a[] from file and save it to x[]
		f = fopen("binaryfile.bin", "rb");
		/*
		 * fread(ptr, item_size, num_items, fp) -> reads array from the file
		 * ptr -> location for saving the values read from the file.
		 * same as fwrite() for next three.
		*/
		fread(x, sizeof(a[0]), sizeof(a)/sizeof(a[0]), f);
		fclose(f);

		// Printing the values read from f 
		for(i = 0; i < 10; i++)
				printf("%d ", x[i]);

		printf("\n");
		return 0;
}
