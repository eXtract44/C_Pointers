
#include <stdio.h>

#include "array.h"


#define ar_size 6
int main() {
	int ar[ar_size] = {1,-1,1,-1,1,1};

	//printf("func = %d \n", ifPolindrome(ar,ar_size));
	ifSignedUnsignedRecursiveBest(ar,ar_size);
	return 0;



}
