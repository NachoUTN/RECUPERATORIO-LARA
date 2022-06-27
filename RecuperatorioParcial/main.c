#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"parcial.h"

#define TAM 5
int main()
{
	setbuf(stdout,NULL);

	char cadena[5] = "HOLA";

	invertir(cadena);

	printf("%s",cadena);

	ordenarAscendente(cadena);

	printf("%s",cadena);


    return 0;
}


