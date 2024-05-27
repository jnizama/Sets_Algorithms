
#ifdef OPERATIONSPOINTERS_H
#include "OperationsPointers.h"
#endif // OPERATIONPOINTERS_H

struct Referencia {
	int value;
	int* address;
} referencia;

void ShowAddress(int* value, float addressValues[])
{
	referencia.value = value;
	referencia.address = &value;
}
