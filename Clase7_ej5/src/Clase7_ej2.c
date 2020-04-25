/*
 * Ejercicio 5:
 a) Realizar un programa que le pida 5 numeros int al usuario y los almacene en un array.
    Luego ejecutar la funcion borrarImpares() pasandole el array y que deberá reemplazar
    los numeros que son impares por un cero.

 b) Luego imprimir el array para chequear el funcionamiento.

 c) Ordenar el array de menor a mayor y volver a imprimirlo.
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "logica.h"
#define QTY_ELEMENTOS 5

int main(void)
{
	int arrayInt[QTY_ELEMENTOS];

	if(!solicitarNumeros(arrayInt,QTY_ELEMENTOS))
	{
		borrarImpares(arrayInt,QTY_ELEMENTOS);
		imprimirNumeros(arrayInt,QTY_ELEMENTOS);
		ordenarNumeros(arrayInt,QTY_ELEMENTOS);
		imprimirNumeros(arrayInt,QTY_ELEMENTOS);
	}
	return EXIT_SUCCESS;
}






