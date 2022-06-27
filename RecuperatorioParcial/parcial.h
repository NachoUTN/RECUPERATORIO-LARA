#ifndef PARCIAL_H_INCLUDED
#define PARCIAL_H_INCLUDED

typedef struct
{
	int id;
	char nombre[20];
	int infectados = 0;
	int recuperados = 0;
	int muertos = 0;

}ePais;

#endif // PARCIAL_H_INCLUDED

int invertir(char cadena[]);
int ordenarAscendente(char vec[]);
