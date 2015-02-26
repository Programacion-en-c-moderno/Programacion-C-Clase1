#include <stdint.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	uint32_t valor = 2;

	if (valor > 10) {
		printf("Valor mayor de 10\n");
		return EXIT_FAILURE;
	}

	assert (valor % 2 == 0);
	printf("El numero es primo\n");

	return EXIT_SUCCESS;
}
