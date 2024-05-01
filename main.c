
#include <stdio.h>

#include "array.h"


#define ar_size 5
int main() {
	int ar[ar_size] = {1,2,3,4,5};

	printf("func = %d \n",avarageArray(ar,ar_size));
	
	//printf("******* \n");
	//print_array_right_recursive(ar,ar_size);
	return 0;



}
