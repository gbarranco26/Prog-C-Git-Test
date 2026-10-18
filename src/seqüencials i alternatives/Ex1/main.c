#include <stdio.h>
#include <assert.h>
#include "ultim_digit.h"

int main(void) {
	assert(ultim_digit(3)==3);
	assert(ultim_digit(0)==0);
	assert(ultim_digit(123)==3);

	printf("Todos los asserts han pasado ! \n");
	return 0;
}

