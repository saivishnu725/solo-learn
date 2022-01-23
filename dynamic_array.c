#include<stdio.h>
#include<stdlib.h>
int main()
{
		typedef struct{
				int *elements;
				int size;
				int cap;
		} darray;
		darray arr;
		int i;


		/* initialize the array */
		arr.size = 0;
		arr.elements = calloc(1, sizeof(*arr.elements) );
		arr.cap = 1;

		/* adding a value */
		printf("\nFirst attempt\n");
		if( arr.size < arr.cap){	// It adds to index 0
				arr.elements[arr.size] = 10;
				arr.size++;
				printf("%d\nsize: %d\n", arr.elements[arr.size - 1], arr.size);
		} else {
				printf("Need to expand the array.");
		}
		printf("\n\nSecond attempt\n");
		if( arr.size < arr.cap){	// Tries to add to index 1 but 1 is not available
				arr.elements[arr.size] = 50;
                arr.size++;
                printf("%d\nsize: %d\n", arr.elements[arr.size - 1], arr.size);
        } else {
                printf("Need to expand the array.\n");
        }

		/* Expanding the array */
		arr.elements = realloc(arr.elements, (5 + arr.cap) * sizeof(*arr.elements));
		if(arr.elements != NULL)
				arr.cap += 5;
		printf("\nIncreases the array capacity by 5\nCap = %d\n", arr.cap);
		
		printf("\n\nThird attempt\n");
		if( arr.size < arr.cap){	// Tries to add to index 1 again.
				arr.elements[arr.size] = 100;
                arr.size++;
                printf("%d\nsize: %d\n", arr.elements[arr.size - 1], arr.size);
        } else {
                printf("Need to expand the array.\n");
        }
		
		/* Display the elements */
		printf("\n\nArray elements are: \n");
		for(i = 0; i < arr.size; i++)
				printf("%d\n", arr.elements[i]);

		return 0;
}
