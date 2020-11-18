#include <stdio.h>
#include <string.h>

int main(void)
{
	char cadena1 [] = "Hola";
	char * cadena2 = "Hola";

	/*cadena1 = "Chau"; Incorrecto*/
	/*cadena2 = "Chau"; Correcto, hace que cadena 2 pase a ser Chau*/
	printf("%s\n", cadena1);
	printf("%s\n", cadena2);

	strcpy(cadena1,"Chau");
	puts(cadena1);
	
	strcpy(cadena2,"Chau"); 
	/*Incorrecto, porque cadena2 es un puntero inicializado para apuntar a una cadena constante. Resultado indefinido si se intenta modificar el contenido de la cadena. */
	puts(cadena2);

	strcpy(cadena1,"Hola y chau"); /*Incorrecto porque cadena 1 no tiene sufieciente memoria para tener todo esta cadena de caracteres.*/
	puts(cadena1);

	return 0;
}