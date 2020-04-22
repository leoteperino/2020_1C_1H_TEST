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
 * \brief 	inicializa un array de flotantes
 * \param pArray Puntero al array
 * \param longitud Define el tamaño del array
 * \param valorInicial Es es valor a ser cargado en todas las posiciones del array
 * \return Retorna 0 (EXITO)  y -1 (ERROR)
 *
 */
int initArrayFlotante(float* pArray, int longitud,float valorInicial)
{
	int retorno = -1;
	int i;
	if(pArray != NULL && longitud > 0)
	{
		retorno = 0;
		for(i=0;i<longitud;i++)
		{
			pArray[i] = valorInicial;
		}
	}
	return retorno;
}

/**
 * \brief 	Imprime un array de flotantes
 * \param pArray Puntero al array
 * \param longitud Define el tamaño del array
 * \return Retorna 0 (EXITO)  y -1 (ERROR)
 *
 */
int imprimeArrayFlotante(float* pArray, int longitud)
{
	int retorno = -1;
	int i;
	if(pArray != NULL && longitud > 0)
	{
		retorno = 0;
		for(i=0;i<longitud;i++)
		{
			printf("\nIndice: [%d] - Dia: [%d] - Valor: %.2f",i,i+1,pArray[i]);
		}
	}
	return retorno;
}

/**
 * \brief 	Carga una temperatura en el Array
 * \param pArray Puntero al array
 * \param longitud Define el tamaño del array
 * \return Retorna 0 (EXITO)  y -1 (ERROR)
 *
 */
int cargarTemperatura(float* pArray, int longitud)
{
	int retorno = -1;
	int respuesta;
	int dia;
	float temperatura;
	if(pArray != NULL && longitud > 0)
	{
		retorno = 0;
		respuesta = utn_getNumero(&dia , "\nQue dia quiere modificar? : ", "\nDia invalido [1-31]",1,longitud,2);
		if(!respuesta)
		{
			respuesta = utn_getNumeroFlotante(&temperatura,"\n Indique la temperatura: ","Error temperatura fuera de rango",-50,70,2);
			if(!respuesta)
			{
				pArray[dia-1] = temperatura;
			}
		}
	}
	return retorno;
}
