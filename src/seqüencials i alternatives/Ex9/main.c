#include <stdio.h>
#include "intervals.h"
#include <stdbool.h>
#include <assert.h>

	bool sequen_intervals( int x1, int x2, int y1, int y2);

int main(void) {
	assert(sequen_intervals(1, 2, 2, 3) == true);
	assert(sequen_intervals(2, 3, 5, 6) == false);
	assert(sequen_intervals(0, 2, 1, 5) == true);
	printf("Tots els asserts han passat! \n");
}
