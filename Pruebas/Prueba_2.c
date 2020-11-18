#include<stdio.h>
int main(void) 
{
   int x = 50;
   int *ptr = &x;
   printf("The address of x is: %p, the value is %d\n", (void*)&x, x);
   printf("The address is: %p, the value is %d\n", (void*)ptr, *ptr);
	return 0;
}