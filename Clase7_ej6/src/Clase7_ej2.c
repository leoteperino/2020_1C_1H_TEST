/*
 * Ejercicio 6:
	Dado el texto almacenado en el array de char "texto". Realizar una funcion que reciba
	un array de char y su longitud, y devuelva por referencia la cantidad de palabras
	encontradas y probarla con dicho texto.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * \brief 	Cuenta la cantid de palabras en un array de char
 * \param cadena Es el array de char a ser analizado
 * \param len longitud del array de char
 * \param pPalabras Puntero a la variable resultado de lacuenta de palabras
 * \return Retorna 0 (EXITO) y -1 (ERROR)
 *
 */
int contarPalabras(char cadena[], int len, int* pPalabras)
{
	int retorno = -1;
	int contador=0;
	int i;
	if(cadena != NULL && len > 0 && pPalabras != NULL)
	{
		retorno = 0;
		for(i=0; i < len && cadena[i] != '\0'; i++)
		{
			if(cadena[i] == ' ')
			{
				contador++;
			}
		}
		*pPalabras = contador;
	}
	return retorno;
}



int main(void) {

	int palabras;
	char texto[]="paises adoptaron para frenar el avance del coronavirus continuan produciendo cambios bruscos en el medio ambiente gracias a la reduccion de la contaminacion y la baja de circulacion de personas. En este escenario, los animales silvestres en distintas partes del mundo se estan animando a ocupar espacios antes impensados debido a la alta presencia del ser humano. Tal es el caso de los lobos marinos de Mar del Plata, que fueron vistos deambulando por el puerto casi con total libertad.";


	if(contarPalabras(texto,sizeof(texto),&palabras)==0)
	{
		printf("El texto contiene:%d palabras",palabras);
	}

	return EXIT_SUCCESS;
}





