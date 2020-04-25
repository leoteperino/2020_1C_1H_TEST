/*
 * Ejercicio 2:
 * crear un programa que permita registrar el valor de temperatura maxima de cada dia de un mes.
 * Definir un array de floats de 31 posiciones. Cada posicion corresponderá a un dia
 * del mes. Hacer un programa con un menu de dos opciones, 1.imprimir array y 2.cargar array
 * Al elegir la opcion 1, se imprimira el indice y el valor de cada posicion del array.
 * Al elegir la opcion 2 que le pida al usuario que ingrese un numero de dia (1 a 31)
 * y luego que ingrese un valor de temperatura. Almacenar el valor en el indice correspondiente
 * Ambas opciones deben volver al menu ppal.
 *
 * Utilizar la funcion utn_getNumeroFloat() de la biblioteca utn.h
 *
 * Ejercicio 3: Definir una funcion validarFloat() que reciba un array de chars en donde los
 * caracteres representan un numero decimal. La funcion debera devolver en su valor de retorno
 * si la cadena recibida contiene o no un valor numerico en formato texto.
 *
 * Ejercicio 4:
 * Completar la funcion getFloat() para que devuelva un numero float ingresado por el usuario
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "logica.h"

#define DIAS 31

int main(void) {
	int respuesta;
	int opcion;
	float arrayTemperaturas[DIAS];

	if(initArrayFlotante(arrayTemperaturas,DIAS,-1000) == 0)
	{
		printf("\nINIT OK");
	}

	do
	{
		respuesta = utn_getNumero(&opcion, "\n1. Imprimir Array\n2. Cargar Temperatura\n3. Salir","\nOpcion invalida [1-3]",1,3,1);
		if(!respuesta)
		{
			switch(opcion)
			{
				case 1:
					imprimeArrayFlotante(arrayTemperaturas,DIAS);
					break;
				case 2:
					cargarTemperatura(arrayTemperaturas,DIAS);
					break;
			}
		}
	}while(opcion != 3);

	return EXIT_SUCCESS;
}



