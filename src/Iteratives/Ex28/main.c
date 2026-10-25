#include <stdio.h>
#include "acompanyats.h"
#include <assert.h>

int main(void) {
	assert(digits_acompanyats(112233)==true);
	assert(digits_acompanyats(12223)==true);
	assert(digits_acompanyats(1231)==false);
	assert(digits_acompanyats(181423)==false);
	printf("Tots els asserts han passat. \n");
	return 0;
}

