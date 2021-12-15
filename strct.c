#include<stdio.h>
int main()
{
				struct student {
								//		Variables inside a struct are called as members
								int age;
								char name[25];
								float perc;
				};
				typedef struct{ //			Using "typedef" while declaring a struct will allow us to create a struct variable without using the "struct" keyword every single time.
								int id;
								char name[25];
								float exp;
				}staff;
				staff st1 = { 114206911, "idc", 1.4 };
				printf("Staff name = %s\n", st1.name);
				struct student s1 = {18, "Sai Vishnu", 99.96};//		Direct initialisation
				
				struct student s2;
				s2 = (struct student) {18, "Sai Vishnu", 99.9};//		Using type-cast (Explicitly declaring the type)

				struct student s3 = { .perc = 99.9, .age = 18, .name = "Sai Vishnu" };//	We can use the members name to give the values in any order.

				printf("s1.age = %d \ns2.name = %s \ns3.perc = %2.2f\n", s1.age, s2.name, s3.perc);
				struct student s4;
				s4 = s1;//		We can save the value of a struct variable to another using assignment operator( = )
				printf("s1.age = %d\t s4.age = %d\n", s1.age, s4.age);

				return 0;
}
