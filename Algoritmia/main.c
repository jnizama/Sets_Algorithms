#include "OperationsPointers.h"
#include <stdlib.h>


int main(int args)
{

	float addressValues[3];
	
	while (LENGHT(addressValues) > 0) {
		int numberRandon = rand() % 100 + 1;
		ShowAddress(numberRandon, addressValues);
	}
	
	return 0;
}