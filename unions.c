#include<stdio.h>
int main()
{
		union v {
				int inum;
				float fnum;
				char a;
		};
		union v val;
		val.inum = 10;
		printf("%d\n",val.inum);
		val.fnum = 2.0;
		printf("%f\n", val.fnum);
		val.a ='a';
		printf("inum = %d\n", val.inum);
		printf("fnum = %f\n", val.fnum);
		printf("c = %c\n", val.a);
}
