#include <stdio.h>

int main(void)
{
	float n;
	float * nPtr;

	nPtr = &n;
	
	*nPtr = 3;
	
	printf("%.1f\n", *nPtr);
	printf("%f\n", n);
	return 0; 
}