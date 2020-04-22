/*
 * logica.c
 *
 *  Created on: Apr 18, 2020
 *      Author: Mauro
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

/**
 * \brief Recorre un array borra los numeros impares
 * \param pArray es el puntedo al array que se va a imprimir
 * \param longitud Define el tamaño del array
 * \return Retorna 0 (EXITO) y -1 (ERROR) si no
 *
 */
int borrarImpares(int* pArray, int limite)
{
	int retorno=-1;
	int i;
	if(pArray != NULL && limite > 0)
	{
		for(i=0;i<limite;i++)
		{
			if((pArray[i]%2)!=0)
			{
				pArray[i]=0;
			}
		}
		retorno = 0;
	}
	return retorno;
}

/**
 * \brief Imprime el contenido de un array de enteros
 * \param pArray es el puntedo al array que se va a imprimir
 * \param longitud Define el tamaño del array
 * \return Retorna 0 (EXITO) y -1 (ERROR) si no
 *
 */
int imprimirNumeros(int* pArray, int limite)
{
	int retorno=-1;
	int i;
	if(pArray != NULL && limite > 0)
	{
		for(i=0;i<limite;i++)
		{
			printf("\nIndice: [%d] - Valor: %d",i,pArray[i]);
		}
		retorno = 0;
	}
	return retorno;
}
/**
 * \brief Solita numeros al usuario para cargarlos en un array
 * \param pArray es el puntedo al array que se va a imprimir
 * \param longitud Define el tamaño del array
 * \return Retorna 0 (EXITO) y -1 (ERROR) si no
 *
 */
int solicitarNumeros(int* pArray, int limite)
{
	int retorno=-1;
	int i;
	if(pArray != NULL && limite > 0)
	{
		retorno = 0;
		for(i=0;i<limite;i++)
		{
			if(utn_getNumero(&pArray[i], "\nIngrese un numero entero: ", "Error", -1000,1000,2) == -1)
			{
				retorno=-1;
				break;
			}
		}
	}
	return retorno;
}

/**
 * \brief Ordena un array de enteros de menor a mayor
 * \param pArray es el puntedo al array que se va a imprimir
 * \param longitud Define el tamaño del array
 * \return Retorna 0 (EXITO) y -1 (ERROR) si no
 *
 */
int ordenarNumeros(int* pArray, int limite)
{
	int retorno=-1;
	int i;
	int flagSwap;
	int buffer;
	if(pArray != NULL && limite > 0)
	{
		do
		{
			flagSwap=0;
			limite--;
			for(i=0;i<limite;i++)
			{
				if(pArray[i] > pArray[i+1])
				{
					buffer = pArray[i];
					pArray[i] = pArray[i+1];
					pArray[i+1] = buffer;
					flagSwap=1;
				}
			}
		}while(flagSwap);
		retorno = 0;
	}
	return retorno;
}
