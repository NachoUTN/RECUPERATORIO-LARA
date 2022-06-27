#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parcial.h"


int invertir(char cadena[])
{
	int ok = 0;
  int longitud = strlen(cadena);
  char aux;
  char cadenaAux[longitud];
  int derecha = longitud;

  	 if(cadena != NULL)
  	 {
		  for(int i = 0;i<longitud;i++)
		  {
				aux = cadena[i];
				cadenaAux[derecha] = aux;
				derecha--;
		  }

		  strcpy(cadena,cadenaAux);
		  ok=1;
  	 }

  return ok;;
}

int ordenarAscendente(char vec[])
{
	int tam = strlen(vec);
    int todoOk = 0;
    char aux;

    if(vec != NULL && tam > 0)
    {
        for(int i=0; i < tam - 1; i++)
        {
            for(int j = i + 1; j <tam; j++)
            {
                if( vec[i] > vec[j])
                {
                    aux = vec[i];
                    vec[i] = vec[j];
                    vec[j] = aux;
                }
            }
        }
        todoOk = 1;
    }
    return todoOk;
}

