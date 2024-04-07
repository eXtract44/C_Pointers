void swapInts(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swapIntsNoThird1(int* a, int* b) {
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void swapIntsNoThird2(int* a, int* b) {
	*a = *a * *b;
	*b = *a / *b;
	*a = *a / *b;
}

void genericSwap(void* a, void* b, int size)
{
	void* tempMemory = malloc(size);
	memcpy(tempMemory, a, size);
	memcpy(a, b, size);
	memcpy(b, tempMemory, size);
}
