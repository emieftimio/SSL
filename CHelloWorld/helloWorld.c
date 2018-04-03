/*
 ============================================================================
 Name        : helloWorld.c
 Author      : Emiliano Eftimio
 Version     :
 Copyright   : -
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

// 	Trabajo #0
//	Autor: Emiliano Eftimio
// 	Curso: K2051 - Profesor:Sola
//	Este programa imprime por consola el mensaje Hello World contenido en la variable salida
// 	Ademas captura esta salida y la guarda en un archivo output.txt
//	Programa realizado mediante el IDE de Eclipse Mars

#include <stdio.h>


int main(void) {
	FILE *archivo;
	char salida[30] = "Hello World!.\n";

	printf(salida);	// Muestro variable salida de tipo char, por consola.

	archivo= fopen("output.txt","w+");	// Abro archivo output.txt y lo almaceno en una variale archivo con permisos de escritura

	fprintf(archivo,salida);	// Imprimo variable salida en archivo output.txt


	fclose(archivo);		// Cierro archivo output.txt

	return 0;
}

