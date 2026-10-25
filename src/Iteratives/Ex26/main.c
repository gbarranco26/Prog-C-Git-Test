#include <stdio.h>
#include <assert.h>
#include "intensitat.h"

int main(void) {
	assert(calcular_intensitat(4, 6, 1)==8);
	assert(calcular_intensitat(2, 3, 0)==5);
	assert(calcular_intensitat(0, 0, 0)==0);
	assert(calcular_intensitat(20, 30, 50)==50);
	
	int n = senar_enter_positiu();
	int centre = n / 2;
	for (int i =0; i <= n-1; i++) {
		for (int j = 0; j <= n-1; j++) {
			int intensitat = calcular_intensitat( i, j, centre);
			printf("%d ", intensitat );
		}
		printf("\n");
	}

	return 0;


}
