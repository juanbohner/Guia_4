#include <stdio.h>

int main(void)
{
	int *ip, i, j, **ipp, (*ip4)[4];
	int ventas[3][4] = {{3,5,7,0},{5,2,1,6},{8,5,3,7}};	
	
	ip4 = ventas;
	i = 1;
	j =3;
	ip = (int *)ventas;
	ipp = (int **)ventas;
	printf("%d\n",  *(*(ip4 + i) + j) );
	printf("%d\n", *(*(ventas + i ) + j));
	/*
	for (i = 0; i<3; i++)
	{
		for (j = 0; j <4; j++)
		{
			printf("PARA ip:\n");
			printf("Valor:\t");
			printf("%d\n", *ip);
			printf("posicion en memoria:\t");
			printf("%p\n\n", (void *)ip);

			printf("PARA ventas:\n");
			printf("Valor:\t");
			printf("%d\n", ventas[i][j]);
			printf("posicion en memoria:\t");			
			printf("%p\n\n", (void *)ventas[i][j]);

			printf("PARA ipp:\n");
			printf("\t\t\t\t%p\n", (void *)ipp);


			ip++;
			ipp++;
		}
	}
	*/
	
	
/*
e) *(*(ventas + i ) + j) 
*/
	return 0;
}