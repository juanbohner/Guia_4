/*4 manera de referirse a los elementos de un arreglo*/
#include <stdio.h>

int main(void)
{
	int i, offset, b[] = {10, 20, 30, 40};
	int * bPtr = b; /*Apunta al array b*/
	
	printf("Arreglo b impreso con:\n");
	printf("Array subscript notation\n");
	for (i = 0; i <= 3; i++)
	{
		printf("b[%d] = %d\n", i, b[i]);
	}
	
	
	
	printf("\nNotacion /offset del puntero\n donde el puntero es el nombre del arreglo\n");
	for (offset = 0; offset <= 3; offset++)
	{
		printf("*(b + %d) = %d\n", offset, *(b + offset));
	}


	printf("\nPointer subscript notation\n");
	for (i = 0; i <= 3; i++)
	{
		printf("bPtr[%d] = %d\n", i, bPtr[i]);
	}

	
	printf("\nNotacion /offset del puntero\n" );
	for (offset = 0; offset <= 3; offset++)
	{
		printf("*(bPtr + %d) = %d\n", offset, *(bPtr + offset));
	}
	
	return 0;
}