

#include <stdio.h>
#include <stdlib.h>
#define QTY_EMPLEADOS 9

int printArrayInt(int* pArray, int limite);
int ordenarArrayInt(int* pArray, int limite);
int ordenarArrayIntMal(int* pArray, int limite);

int main(void)
{
	int arrayEdades[QTY_EMPLEADOS] = {54,26,93,17,77,31,44,55,27};
	int respuesta;

	printArrayInt(arrayEdades,QTY_EMPLEADOS);
	respuesta = ordenarArrayInt(arrayEdades,QTY_EMPLEADOS);
	if( respuesta > 0)
	{
		printf("\n\n Iteraciones : %d\n\n",respuesta);
	}
	printArrayInt(arrayEdades,QTY_EMPLEADOS);


	respuesta = ordenarArrayInt(arrayEdades,QTY_EMPLEADOS);
	if( respuesta > 0)
	{
		printf("\n\n Iteraciones : %d\n\n",respuesta);
	}
	return EXIT_SUCCESS;
}



/**
 * \brief Imprime a modo DEBUG la informacion de un array de enteros
 * \param pArray Es el puntero al array a ser ordenado
 * \param size Es la longitud del array
 * \return 0 si Ok o -1 para indicar un error
 *
 */
int printArrayInt(int* pArray, int limite)
{
	int retorno = -1;
	int i;
	if(pArray != NULL && limite >= 0)
	{
		retorno = 0;
		for(i=0;i<limite;i++)
		{
			printf("\n[DEBUG]  Indice: %d - Valor: %d",i,pArray[i]);
		}
	}
	return retorno;
}

/**
 * \brief Ordena un array de enteros DESC
 * \param pArray Es el puntero al array a ser ordenado
 * \param size Es la longitud del array
 * \return Cantidad de iteraciones necesarias para ordenar si Ok o -1 para indicar un error
 *
 */
int ordenarArrayInt(int* pArray, int limite)
{
	int flagSwap;
	int i;
	int contador=0;
	int retorno = -1;
	int buffer;

	if(pArray != NULL && limite >= 0)
	{
		do
		{
			flagSwap=0;
			for( i=0 ; i<limite - 1 ; i++)
			{
				contador++;
				if(pArray[i] < pArray[i+1])
				{
					flagSwap = 1;
					buffer = pArray[i];
					pArray[i] = pArray[i+1];
					pArray[i+1] = buffer;
				}
			}
			limite--;
		}while(flagSwap);
		retorno = contador;
	}
	return retorno;
}




/**
 * \brief Ordena un array de enteros DESC MAL
 * \param pArray Es el puntero al array a ser ordenado
 * \param size Es la longitud del array
 * \return Cantidad de iteraciones necesarias para ordenar si Ok o -1 para indicar un error
 *
 */
int ordenarArrayIntMal(int* pArray, int limite)
{
	int i;
	int j;
	int contador=0;
	int retorno = -1;
	int buffer;



	if(pArray != NULL && limite >= 0)
	{
		for(i=0;i<limite -1;i++)
		{
			for(j=i+1;j<limite;j++)
			{
				contador++;
				if(pArray[i] < pArray[j])
				{
					buffer = pArray[i];
					pArray[i] = pArray[j];
					pArray[j] = buffer;
				}

			}
		}
		retorno = contador;
	}
	return retorno;
}











