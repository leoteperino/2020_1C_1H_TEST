/*
 * Ejercicio 1:
 * Escribir la funcion calcularMayor(). La funcion debe recibir dos numeros int y devolver
 * por referencia, el numero mayor.
 * La funcion debe retornar un 1 si encontro un mayor, o un 0 si ambos numeros son iguales.
 */
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int calcularMayor(int* pResultado, int numero1, int numero2);

int main(void) {

	int resultado;
	int num1,num2;
	int respuesta;
	int respuestaNum1;
	int respuestaNum2;

	respuestaNum1 = utn_getNumero(&num1,"\nIngrese el numero 1: ","\nNumero fuera de rango\n",-100,100,2);
	respuestaNum2 = utn_getNumero(&num2,"\nIngrese el numero 2: ","\nNumero fuera de rango\n",-100,100,2);

	if(respuestaNum1 == 0 && respuestaNum2 == 0)
	{
		respuesta = calcularMayor(&resultado,num1,num2);
		if(respuesta==0)
		{
			printf("Los numeros son iguales\n");
		}
		else if(respuesta > 0)
		{
			printf("El mayor es:%d\n",resultado);
		}
		else
		{
			printf("Error al validar los parametros\n");
		}
	}
	else
	{
		printf("\nFalto ingresar por lo menos uno de los numeros\n");
	}
	return EXIT_SUCCESS;
}


/**
 * \brief Calcula el numero mayor
 * \param pResultado Puntero al espacio de memoria donde se copia el valor del mayor
 * \param numero1 Primer numero a ser comparado
 * \param numero2 Segundo numero a ser comparado
 * \return Retorna 0 si ambos numero son iguales, 1 si existe uno mayor que el otro y -1 en caso de error
 *
 */
int calcularMayor(int* pResultado, int numero1, int numero2)
{
	int retorno = -1;

	if(pResultado != NULL)
	{
		if(numero1 == numero2)
		{
			retorno = 0;
		}
		else
		{
			retorno = 1;
			if(numero1 > numero2)
			{
				*pResultado = numero1;
			}
			else
			{
				*pResultado = numero2;
			}
		}
	}
	return retorno;
}





















