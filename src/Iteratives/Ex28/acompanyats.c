#include <stdio.h>
#include "acompanyats.h"
#include <stdbool.h>
bool digits_acompanyats(int n) {
	int _2ult_dig = n % 100;
	int ult_dig = _2ult_dig % 10;
	int penult_dig = _2ult_dig / 10;
	while (n >= 10) {
		if (ult_dig == penult_dig) {
			return true;
		}
		else {
			n = n / 10;
			_2ult_dig = n % 100;
			ult_dig = _2ult_dig % 10;
			penult_dig = _2ult_dig / 10;

		}}
	return false;
}
