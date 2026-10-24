#include "intervals.h"
#include <stdbool.h>
bool sequen_intervals(int x1, int x2, int y1, int y2) {
	if (x1 > x2) {
		int tmp = x1; x1 = x2; x2 = tmp;
	}
	if (y1 > y2) {
		int tmp = y1; y1 = y2; y2 = tmp;
	}
	return (x1 <= y2 && y1 <= x2);
}
