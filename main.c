
#include <stdio.h>

#include "array.h"


#define ar_size 10
int main() {
	int ar[ar_size] = {1,2,2,1};

	printf("func = %d \n", ifPolindrome(ar,ar_size));
	return 0;



}
