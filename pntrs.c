#include<stdio.h>
int main()
{
				int a, i;
				printf("Enter a number: ");
				scanf("%d", &a);
				printf("%d is stored at %x.\n", a, &a);

				int b[5] = {1,2,3,4,5};
				int *pt = NULL;
				pt = &b;
//				printf("%d %x %d\n", b[0], pt, *(pt + 2));
				for(i = 0; i <= 4; i++){
								printf("%d %x %d\n", b[i], (pt + i), *(pt + i));
								printf("rep %d %x %d\n", b[i], (pt + i), pt[i]);
				}
				return 0;
}
