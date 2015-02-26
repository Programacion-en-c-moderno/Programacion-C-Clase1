#include <stdio.h>
#include "holamundo.h"

void imprime_nombre (char *nombre)
{
	printf("Hola Mundo %s\n", nombre);
}

void main ()
{
	imprime_nombre("Alvaro");
}
