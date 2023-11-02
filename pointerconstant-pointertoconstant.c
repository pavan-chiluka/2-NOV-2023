#include<stdio.h>
int pointertoconstant(const int *ptr)
{
printf("%d \n",*ptr);
ptr++;
//(*ptr)++,we cant.
}
int constantpointer(int *const ptr)
{
//ptr++,we cant increment address
(*ptr)++;//we can increment value.
printf("%d \n",*ptr);
}
int constantpointer_pointerconstant(const int *const ptr)
{
	printf("%d \n",*ptr);
	//(*ptr)++;
	//ptr++;
	//we cant increment value and address.
	printf("%p \n",ptr);
}
int main()
{
	int n=5;
	pointertoconstant(&n);
	constantpointer(&n);
	constantpointer_pointerconstant(&n);
}
