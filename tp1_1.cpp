#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int valor= 25;
	int *pvalor = &valor;

	printf("1)Contenido del puntero: %d \n", *pvalor);
	printf("2)Direccion de memoria almacenada en el puntero: %p \n", pvalor);
	printf("3)Direccion de memoria de la variable: %p \n", &valor);
	printf("4)Direccion de memoria del puntero: %p \n", *pvalor);
	printf("5)Tamaño de memoria de la variable: %d \n", sizeof(valor));


	//El punto 2 y 3 tienen el mismo resutado ya que el puntero esta apuntado a la direcion de memoria de la variable.
	//En el punto 4 obtengo la direccion de memoria del puntero no de la variable.

} 