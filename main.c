
#include <stdio.h>

#include "array.h"


#define ar_size 6
int main() {
	int ar[ar_size] = {2,40,5,18,1,55};

	//printf("func = %d \n", ifPolindrome(ar,ar_size));
	maxNaighborsValueRecursive(ar,ar_size);
	return 0;



}
