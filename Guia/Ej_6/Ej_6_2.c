#include <stdio.h>

int main (void)
{
	int dos_vector[3][4] = {{1,2,3,4}, { 5,6,7,8}, {9,10,11,12}} ;
	
	int *dos_ptr; 
	/*Punetero para apuntar a cada uno de los elementos de cada sub arreglo.*/
	
	int (*Ptr)[4];
	/*Puntero que apunta a cada arreglo adentro del arreglo dos_vector*/

	int (*ptr2vector)[4]; 
	/*Puntero que apunta a cada arreglo adentro del arreglo dos_vector*/
	
	size_t i, j;


	/* FORMA 1: Usando dos punteros. Uno para ir al principio de cada sub arreglo(fila) y otro para apuntar a cada elelemto de la fila.*/
	ptr2vector = dos_vector;
	
	for(i = 0; i < 3; i++, ptr2vector++)
	{
		dos_ptr = *(ptr2vector);

		for (j = 0; j < 4; j++, dos_ptr++)
		{	

			printf("%d\t", *dos_ptr);
		}
		putchar('\n');
	}
	putchar('\n');
	
	/*FORMA 2: Usando el nombre del arreglo como direccion de memoria de cada sub arreglo de 4 elementos.*/
	for (i =0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%d\t", *(*(dos_vector + i ) + j));
		}
		putchar ('\n');
	}
	putchar('\n');

	/*FORMA 3: Usando un puntero que apunta a arreglos de longitud 4, asignandole a ese puntero la direccion del primer arreglo de un arreglo de arreglos. Y despues Usar esa direccion con dos operadores * adentro de un printf indicando en que fila y que elemento de la fila hay que imprimir.*/
	Ptr = dos_vector;

	for (i =0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%d\t", *(*(Ptr + i ) + j));
		}
		putchar ('\n');
	}
	putchar('\n');


	return 0;
}