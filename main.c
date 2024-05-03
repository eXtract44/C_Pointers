
#include <stdio.h>

#include "array.h"


#define ar_size 5
int main() {
	int ar[ar_size] = {1,2,2,2,2};

	printf("func = %f \n",avarageArrayIter(ar,ar_size));

	//printf("******* \n");
	//print_array_right_recursive(ar,ar_size);
	return 0;



}
