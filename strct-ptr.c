#include<stdio.h>
int main()
{
		struct sample{
				float a;
				int b;
		};
		struct sample s1 = {1.2, 1};
		struct sample *s = &s1;
		printf("Addr of s1 = %d\n", s);
		printf("s1.a = %f\n", s->a);

		return 0;
}
