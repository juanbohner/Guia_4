#include <stdio.h>
#include <stdlib.h>

int main(void) {
	size_t i,j;
	int dos_vector[3][4] = { {1,2,3,4 }, { 5,6,7,8}, {9,10,11,12 } } ;
	int *dos_ptr;
	/*Puntero de tipo int*/
	int (*ptr2vector)[4]; 
	/*Puntero a un erreglo de 4 elementos del tipo int.*/
	
	ptr2vector = dos_vector; 
	/*Le asigna a ptr2vector que apunte a dos_vector[0]
	No hay que poner el & para los arreglos. */
	
	printf("%p\n", (void*)ptr2vector);
	printf("%p\n", (void*)dos_vector);
	printf("%p\n", (void*)dos_ptr);
	
	printf("%d\n", *(ptr2vector[4]));
	
	/*Aca no esta inicializado, por eso que me da un valor raro.*/

	for(i=0; i < 3; i++, ptr2vector++)
	{
		dos_ptr = *ptr2vector;
		printf("\t\tLa direccion donde apunta dos_ptr:%p. En la interaccion:%ld\n", (void*)dos_ptr, (i+1));
		printf("\t\tLa direccion donde apunta dos2vector:%p. En la interaccion:%ld\n\n", (void*)ptr2vector, (i+1));
		/*Para checkear que pasa con las direcciones de memoria de cada puntero.*/
		for(j=0; j < 4; j++, dos_ptr++)
		{
			printf("%d ", *dos_ptr);
			printf("\t\tLa direccion donde apunta dos_ptr:%p. En la interaccion:%ld,%ld\n", (void*)dos_ptr,(i+1),(j+1));
			/*Para ceckear que pasa con la direccion de memoria de dos_ptr*/
		}
		putchar('\n');
	}

	return EXIT_SUCCESS;
}